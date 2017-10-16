# TL-WR802N V3 (EU) FIRMWARE

## Disclaimer
Building and installing a firmware for an embedded device is always tricky and might end up on a bricked device. **I'm not responsible for any damage caused because of using this code**.

## Build requirements

 - `Ubuntu 14.04 i386`
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
This firmware was provided by TP-LINK and it has some compiled binaries that **only run on Ubuntu 14.04 i386**. If you don't use that system you can use a VM or the Docker image I've prepared. Instructions below:

### Ubuntu 14.04 i386

Go to `src/build` folder and execute make.

    $ cd /home/TP-LINK/TL-WR802NV3_eu/build
    $ make

### Docker

Go to the repository root directory and execute:

    $ docker run --rm -v "$PWD/src:/home/user/src:rw" \
      -it iabadia/ubuntu_tl-wr802nv3 \
      /bin/bash -c 'cd /home/user/src/build && make'

That will generate the following files under `src/images/wr802nv3_eu`:
 - `wr802nv3_eu_<version>_flash(<time-stamp>).bin`
 - `wr802nv3_eu_<version>_up(<time-stamp>).bin`
 - `wr802nv3_eu_<version>_up_boot(<time-stamp>).bin`

## Contribute
Use pull-requests or issues to help in any way you might consider useful. All contributions are appreciated!