# Grand Central Dispatch on Raspberry Pi (Raspbian GNU/Linux 9 (stretch)), ARMv6-compatible processor rev 7 (v6l)
This is a minimal illustration of how to use blocks and GCD on Raspberry Pi (specificall a Raspberry Pi Zero, 
model name (as obtained from /proc/cpuinfo): ARMv6-compatible processor rev 7 (v6l)


## Install the following packages:
sudo apt-get install llvm
sudo apt-get install clang
sudo apt-get install libblocksruntime-dev
sudo apt-get install libdispatch-dev

## To use blocks, build with the clang compiler (maybe gcc would work, didn't test)  and specify these two options:
`-fblocks` `-lBlocksRuntime`

## To use Grand Central Dispatch / libdispatch, specify this option:
`-ldispatch`

## In code, include the GCD-lib:
`#include <dispatch/dispatch.h>`
