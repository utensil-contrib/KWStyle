#!/usr/bin/env bash
# NOTE: Run this script in build directory
cmake .. && make -j4 && make install && KWStyle -xml ../Testing/Data/20000-KWStyleConfiguration.kws.xml ../Testing/Data/20000-test.cxx -v
