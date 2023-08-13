#! /bin/zsh

pip uninstall my-library -y
rm -rf build
rm -rf *.egg-info
rm -rf *.cpython*
rm -rf dist
rm -rf **/*.so
