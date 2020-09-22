# C++ Environment

A C++ project structure for compiling, debugging, and running C++ code using Visual Studio Code.

Version 1.0.0

## Requirements

* g++ 9.3.0
* GNU Make 4.2.1
* VSCode 1.49.0
* vcpkg 2020.06.15

`vcpkg` is a powerful library manager for C++ that will make it easy to install and add libraries to your C++ projects. You can find it [here](https://github.com/Microsoft/vcpkg).

## Prerequisites

### Installing `vcpkg`

```bash
git clone https://github.com/microsoft/vcpkg
./vcpkg/bootstrap-vcpkg.sh
```

### Configuring PATH and Environment variables

Add the following lines to your `~/.bashrc` so that you can install libraries using `vcpkg` and the Makefile can find them.

```bash
export PATH="/path/to/your/vcpkg:$PATH"
export VCPKG_ROOT="/path/to/your/vcpkg/packages"
```

and either close and open your terminal or run `source ~/.bashrc`
to sync the updates.

## Running example

For this example, you need to install the eigen3 library using `vcpkg`

```bash
vcpkg install eigen3
```

Now that the library is installed, you can open the example in vscode. From the root directory of the project, execute:

```bash
code .
```

Open `main.cpp` and press `F5`. This will start the debugger and you can step through your code. 

If you want to run an optimized version, you can choose the `g++ Release`, which will build the `O2` optimized version of the `main.cpp` file.

You can run either mode without using the debugger with `Ctrl+F5`.

## Acknowledgements

* Phil Thomas, CICS, Umass Amherst - C++ introduction as part of CS 687
* [Dave](https://dev.to/tardisgallifrey) for the `tasks.json` structure
* [This](https://www2.cs.duke.edu/courses/spring04/cps108/resources/makefiles/sample.html) Duke U. page on Makefiles.
* `vcpkg` makers at Microsoft for making the automated library management possible

### More information

For more information, check out

* [VSCode Tasks Documentation](https://code.visualstudio.com/Docs/editor/tasks)