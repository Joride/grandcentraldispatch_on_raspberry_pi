# set a name for this build
uuid="GCDExample" #$(uuidgen)

# create a build dir to put the program into (silence output, if the dir already exist, fine)
mkdir build > /dev/null 2>&1

# - compile c-files into program:
# find all the files in the current directory with extension "c", avoid any of macOS' tiny little files
# and pass them to the gcc command. Set as output the first argument
# given to this script

find . -type f \( -name "*.c" ! -name "._*" \) -exec clang -ldispatch -fblocks -lBlocksRuntime -o build/$uuid '{}' +

# run the program
./build/$uuid

