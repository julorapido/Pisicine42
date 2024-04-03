#!/bin/sh

git ls-files --others --ignored --exclude-standard 

# --exclude-standard to not show considered files
# check : https://git-scm.com/docs/git-ls-files
