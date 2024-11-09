#!/bin/sh
# 

# add dependencies
apk add make git build-base

## Download the source code.
REPO_URL="https://github.com/Dnawrkshp/bin2codedef"
REPO_FOLDER="bin2codedef"
REPO_REFERENCE="origin/master"

if test ! -d "$REPO_FOLDER"; then
	git clone $REPO_URL || exit 1
fi
cd $REPO_FOLDER && git fetch origin && git reset --hard ${REPO_REFERENCE} || exit 1
make && make release && cd .. && rm -rf $REPO_FOLDER || exit 2
