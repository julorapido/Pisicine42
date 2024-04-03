#!/bin/sh/

GITLOGS=$(git log --format='%H' -5)

for i in ${GITLOGS};
do
    echo "${i}"
done


