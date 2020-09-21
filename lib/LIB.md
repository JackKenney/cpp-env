# Lib

Folder for including local libraries into code execution.

## Adding new libraries

To include new libraries, add the root directory of the package like `Eigen` for `eigen3` to the `lib` directory.

These will be automatically included when executing with the `Makefile`. These will also be included in the vscode editing environment via the `c_cpp_properties.json`.
