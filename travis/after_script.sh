#!/usr/bin/env bash
set -e
pushd build

lcov --directory . --capture --output-file coverage.info # capture coverage info
lcov --remove coverage.info '/usr/*' --output-file coverage.info # filter out system
lcov --remove coverage.info 'ext/*' --output-file coverage.info # filter out external libraries
lcov --remove coverage.info 'test/*' --output-file coverage.info # filter out testing files

lcov --list coverage.info #debug info

bash <(curl -s https://codecov.io/bash) -t 2e545078-b47f-4d89-b5c7-f3ae010b4162