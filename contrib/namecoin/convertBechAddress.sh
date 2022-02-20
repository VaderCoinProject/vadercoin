#!/bin/sh -e

export PYTHONPATH="test/functional/test_framework"
contrib/vadercoin/convertBechAddress.py $@
