# C++ Environment

A C++ project structure for compiling, debugging, and running C++ code using Visual Studio Code on Unix machines.

## Requirements

* g++ 9.3.0
* GNU Make 4.2.1
* VSCode 1.49.0+

### Configuring PATH and Environment variables

If you would like to reuse libraries across projects, add the following line to your `~/.bashrc`. Otherwise, include the libraries in the local `lib/` folder.

```bash
export CPP_LIB="/path/to/your/cpp/libraries/"
```

Now either close and open your terminal or run `source ~/.bashrc` to sync the updates.

## Running example

First, unpack the `Eigen` folder from the ZIP download on the Eigen [website](http://eigen.tuxfamily.org/) into either the `lib/` or `CPP_LIB` folder. 

Then you can open VSCode like this:
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
* [VSCode Debugging](https://code.visualstudio.com/Docs/editor/debugging)
* [VSCode C/C++ Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
* [Using C++ on Linux in VS Code](https://code.visualstudio.com/docs/cpp/config-linux)
