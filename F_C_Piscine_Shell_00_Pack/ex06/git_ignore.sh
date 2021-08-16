#!/bin/sh
git status --ignored --porcelain --untracked-files=all | grep '!!' | colrm 1 3
