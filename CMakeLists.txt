cmake_minimum_required(VERSION 3.20)
project(memtester-parser)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        memtester-parser
        src/main.cpp
        src/App/App.cpp
        src/App/App.h
        src/App/Source/Source.cpp
        src/App/Source/Source.h
        src/App/Address/Range/Range.cpp
        src/App/Address/Range/Range.h
        src/App/Parser/Parser.cpp
        src/App/Parser/Parser.h
        src/App/Address/Converter/Converter.cpp
        src/App/Address/Converter/Converter.h
        src/App/Address/Output/OutputInterface.cpp
        src/App/Address/Output/OutputInterface.h
        src/App/Address/Output/OpenBSDOutput.cpp
        src/App/Address/Output/OpenBSDOutput.h
)
