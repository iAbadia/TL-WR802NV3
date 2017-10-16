# TL-WR802N V3 (EU) FIRMWARE

## Requirements

 - Ubuntu 14.04 i386
 - `gcc 4.6.3` or higher
 - `GNU Make 3.81` or higher
 - `bison`
 - `flex`
 - `fakeroot` and `libfakeroot`
 - `autoconf`
 - `libtool`
 - `Perl`
 - `gawk` or `mawk`
 

## Build

Go to TL-WR802NV3_eu `build` folder and execute make.

    $ cd /home/TP-LINK/TL-WR802NV3_eu/build
    $ make

That will generate the wr802nv3_eu_(xxx).bin, under TL-WR802NV3_eu/images/wr802nv3_eu folder. xxx refers to flash, up or up_boot, with specific time-stamp and version info.

## Contribute
Use pull-requests or issues to help in any way you might consider useful. All contributions are appreciated!