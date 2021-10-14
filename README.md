[![GitHub license][license img]][license link] [![GitHub release][release badge]][release link] [![Conventional Commits][conventional commits badge]][conventional commits link] [![Semantic Versioning][semver badge]][semver link]

# Memtester log parser
Utility for parsing [memtester][memtester link] log and provide output with ready
to use address ranges for excluding in core memory usage. 

### Build
```
mkdir build && cd build
cmake  -B ./ -S ../
cmake \
    --build ./ \
    --target memtester-parser
```

### Compatibility
Compatible with [memtester][memtester link] v.4.5.1.

Provides OpenBSD [boot.conf][boot.conf link] compatible output for excluding memory
address ranges from core usage. Example:
```
machine memory -0x1000@0x022e8000
machine memory -0x80000@0x00454900
```

### Versioning
Utility follows semantic versioning. As a _public API_ used utility options signature.
See [semver.org][semver link] for details.

[boot.conf link]: http://man.openbsd.org/OpenBSD-5.1/man5/socppc/boot.conf.5
[memtester link]: http://pyropus.ca/software/memtester/
[semver link]: https://semver.org
[semver badge]: https://img.shields.io/badge/semantic%20versioning-2.0.0-green.svg
[conventional commits link]: https://conventionalcommits.org
[conventional commits badge]: https://img.shields.io/badge/Conventional%20Commits-1.0.0-yellow.svg
[release badge]: https://img.shields.io/badge/release-0.1.1-brightgreen.svg
[release link]: https://github.com/nafigator/memtester-parser
[license img]: https://img.shields.io/badge/license-MIT-brightgreen.svg
[license link]: https://tldrlegal.com/license/mit-license
