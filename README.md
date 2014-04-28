=======
Nautiluscoin Core integration/staging tree
=====================================

http://www.nautiluscoin.co

Copyright (c) 2009-2013 Nautiluscoin Core Developers

What is Nautiluscoin?
----------------

Nautiluscoin is an experimental new digital currency that enables instant payments to
anyone, anywhere in the world. Nautiluscoin uses peer-to-peer technology to operate
with no central authority: managing transactions and issuing money are carried
out collectively by the network. Nautiluscoin Core is the name of open source
software which enables the use of this currency.

For more information, as well as an immediately useable, binary version of
the Nautiluscoin Core software, see http://www.nautiluscoin.co.

Technical Specifications
---------------------

 - Scrypt proof-of-work algorithm
 - 60 second block time target
 - ~21 billion total coins
 - 8000 coins per block, reduces by 0.5% each week starting 2/28/14
 - Difficulty retarget every 1 block
 
Links
------------------------
Website: http://www.nautiluscoin.co

NautiluscoinTalk: http://nautiluscointalk.com/index.php

BitcoinTalk: https://bitcointalk.org/index.php?topic=408268.0

Facebook: https://www.facebook.com/nautiluscoincoin

Twitter: https://twitter.com/nautiluscoincoin

VK: https://vk.com/nautiluscoin

Reddit: http://www.reddit.com/r/Digibyte/

IRC Channel: http://webchat.freenode.net/?channels=#nautiluscoincoin

License
-------

Nautiluscoin Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the Nautiluscoin
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on the
[mailing list](http://sourceforge.net/mailarchive/forum.php?forum_name=nautiluscoin-development).

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see [doc/coding.md](doc/coding.md)) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/bitcoin/bitcoin/tags) are created
regularly to indicate new official, stable release versions of Nautiluscoin.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run (assuming they weren't disabled in configure) with: `make check`
