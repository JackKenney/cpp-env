# Bin

The `bin` folder is the directory where binaries are placed once compiled. For example, `main.cpp` will be compiled into `bin/main` for most projects.

## Troubleshooting

If you run into an `ld` error 1 or 2 like this:

```
g++ -std=c++17 -ggdb -Wall -Werror -Iinclude -Ilib src/Rectangle.cpp src/Shape.cpp src/main.cpp -o bin/main
/usr/bin/ld: cannot open output file bin/main: No such file or directory
collect2: error: ld returned 1 exit status
make: *** [Makefile:25: bin/main] Error 1
The terminal process "/bin/bash '-c', 'make'" terminated with exit code: 2.
```

You may have deleted this folder and `make` cannot find this directory to put your compiled files into.