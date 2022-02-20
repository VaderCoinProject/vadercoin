Vadercoin Core
==============

Setup
---------------------
[Vadercoin Core](http://vadercoin.org/) is the official Vadercoin client and it builds the backbone of the network. However, it downloads and stores the entire history of Vadercoin transactions (which is currently several GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Vadercoin Core, visit [vadercoin.org](https://vadercoin.org/download/).

Running
---------------------
The following are some helpful notes on how to run Vadercoin Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/vadercoin-qt` (GUI) or
- `bin/vadercoind` (headless)

### Windows

Unpack the files into a directory, and then run vadercoin-qt.exe.

### macOS

Drag Vadercoin-Qt to your applications folder, and then run Vadercoin-Qt.

### Need Help?

* See the documentation at the [Vadercoin Site](https://vadercoin.org)
for help and more information.
* Ask for help on [#vadercoin](http://webchat.freenode.net?channels=vadercoin) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=vadercoin).
* Ask for help on the [Vadercoin forums](https://forum.vadercoin.info/index.php), in the [Technical Support board](https://forum.vadercoin.info/viewforum.php?f=7).

Building
---------------------
The following are developer notes on how to build Vadercoin Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Android Build Notes](build-android.md)
- [Gitian Building Guide (External Link)](https://github.com/vadercoin-core/docs/blob/master/gitian-building.md)

Development
---------------------
The Vadercoin repo's [root README](https://github.com/vadercoin/namecore/blob/master/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.vadercoincore.org/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [Vadercoin forums](https://forum.vadercoin.info/), in the [Development & Technical Discussion board](https://forum.vadercoin.info/viewforum.php?f=8).
* Discuss on [#vadercoin-dev](http://webchat.freenode.net/?channels=vadercoin-dev) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=vadercoin-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [vadercoin.conf Configuration File](vadercoin-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [I2P Support](i2p.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [PSBT support](psbt.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [ZMQ](zmq.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
