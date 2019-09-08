#!/usr/bin/env bash
set -e

pushd build
make -j2

./EmbGenParserTest

popd

cppcheck src/*.cpp include/Parser/EmbGen/*.hpp
