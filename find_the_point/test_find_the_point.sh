#!/bin/bash
[ -f find_the_point ] || ./make_find_the_point.sh

output="$(./find_the_point < test_find_the_point.input 2> /dev/null | diff - test_find_the_point.output)"

if [[ $output == "" ]]
then
    echo "Test succeeded."
else
    echo "Test failed.  Output diff:"
    echo $output
fi
