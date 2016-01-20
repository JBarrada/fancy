#!/bin/bash

make
kvm -cdrom fancy.iso\
    -drive file=/dev/sdb,if=none,id=mydisk \
    -device ich9-ahci,id=ahci \
    -device ide-drive,drive=mydisk,bus=ahci.0