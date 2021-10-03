#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <iomanip>

using namespace std;

int main(){
    fstream memTesterLog;

    memTesterLog.open("memtester.log", ios::in); //open a file to perform read operation using file object
    if (!memTesterLog.is_open()) {
        cout << "Unable to open file" << endl;

        exit(1);
    }

    string line, rangeStart, rangeNext;
    smatch range, newRange;
    regex rangeRegex(R"(^.*FAILURE:.+ at offset (0x[\da-f]+)\.$)");
    regex newRangeRegex(R"(^  .+FAILURE:.+ at offset (0x[\da-f]+)\.$)");

    while(getline(memTesterLog, line)){ //read data from file object and put it into string.
        if (regex_match(line, range, rangeRegex)) {
//            cout << line << endl;
            cout << range[1] << endl;

//            cout << "range start: " << rangeStart << endl;
            if (rangeStart.empty()) {
                rangeStart = range[1];
                rangeNext = "";

                continue;
            }

            if (regex_match(line, newRange, newRangeRegex)) {
                cout << "Range start:\t" << rangeStart << endl;
                cout << "Range end:\t\t" << rangeNext << endl;

                rangeStart = newRange[1];
                rangeNext = "";

                continue;
            }

//            cout << "found next: " << range[0] << endl;

            rangeNext = range[1];

            continue;
        }

        if (rangeStart.empty()) {
            continue;
        }

        cout << "Range start:\t" << rangeStart << endl;
        cout << "Range end:\t\t" << rangeNext << endl;

        rangeStart = rangeNext = "";
    }

    memTesterLog.close(); //close the file object.
}

