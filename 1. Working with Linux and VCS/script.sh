#!/bin/bash

FILENAME=$1
DIRNAME=$2

touch $FILENAME
mkdir $DIRNAME
cp $FILENAME $DIRNAME

# bash script.sh filename dirname
