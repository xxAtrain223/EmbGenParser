#!/usr/bin/env bash
set -e
mkdir build
cd build

cmake -DEmbGenParser_ENABLE_TESTING:BOOL=ON ..