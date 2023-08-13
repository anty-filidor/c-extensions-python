# Example of a Python package with C extensions

This repo contains an example how to add C functions via Python API so that they
can be executed directly from Python interpreter and included in a PyPI package.

Structure of the repo:
```
.
├── c_modules           <- C functions
├── cleanup.sh
├── install.sh
├── my_library          <- Python package that will include C functions
│   ├── __init__.py
│   ├── functions.py
│   └── my_lib.py       <- interface for C functions to enable type hints
├── setup.py            <- definition of the package
└── test_package.ipynb  <- a notebook to test the example
```

## Runing the code
0. Launch the repo on Unix OS
1. Install clang (tested on 14.0.3)
2. Install Python (tested on 3.10.9) with distutils module

## USeful links

https://realpython.com/build-python-c-extension-module/  
https://realpython.com/python-bindings-overview/  
https://docs.python.org/3/extending/newtypes_tutorial.html  
https://docs.python.org/3/extending/newtypes_tutorial.html  
