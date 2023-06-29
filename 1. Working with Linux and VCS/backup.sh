#!/bin/bash

DIRNAME=$1
ALGORITHM=$2
FILENAME=$3

if [[ $ALGORITHM == "gzip" ]]; then
    tar czpf - $DIRNAME | gpg --symmetric --cipher-algo aes256 -o $FILENAME.tar.gz.gpg 2> error.log
    # распаковать с дешифровкой: gpg -d archive.tar.bz2.gpg | tar xzf -
else
    tar cjpf - $DIRNAME | gpg --symmetric --cipher-algo aes256 -o $FILENAME.tar.bz2.gpg 2> error.log
fi
