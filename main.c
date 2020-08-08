/**
# To use blocks, build with clang and specify these two options:
-fblocks -lBlocksRuntime
# To use Grand Central Dispatch / libdispatch, specify this option:
-ldispatch
 and inlude the lib:
 #include <dispatch/dispatch.h>

 Install the following packages:
sudo apt-get install llvm
sudo apt-get install clang
sudo apt-get install libblocksruntime-dev
sudo apt-get install libdispatch-dev
*/


#include <stdio.h>
#include <stdlib.h>
#include <dispatch/dispatch.h>

int main(int argc, char * argv[])
{
    dispatch_queue_t queue = dispatch_queue_create("myqueue", NULL);
    dispatch_async(queue, ^{
        printf("This is the block\n");
    });

    int (^MyBlock)(int) = ^int(int intAsParam)
    {
        printf("The parameter is %i\n", intAsParam);
        return 2 *  intAsParam;
    };

    int result = MyBlock(12);
    printf("Block produced: %i\n", result);
}
