#!/usr/bin/env bash
set -e

pushd build
make -j2

pushd parser
./EmbGenParserTest
popd

popd

pushd parser
cppcheck src/*.cpp include/Parser/EmbGen/*.hpp
popd
