#!/bin/bash

# Prereqs: sudo apt-get install icnsutils
# Run this script from the directory where it is located.

png2icns ../../src/qt/res/icons/vadercoin.icns ./vadercoin16.png ./vadercoin32.png ./vadercoin128.png ./vadercoin256.png ./vadercoin512.png ./vadercoin1024.png
