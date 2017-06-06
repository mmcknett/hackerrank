#!/bin/bash
[ -f maximum_draws ] || ./make_maximum_draws.sh

output="$(./maximum_draws < test_maximum_draws.input 2> /dev/null | diff - test_maximum_draws.output)"

if [[ $output == "" ]]
then
    echo "Test succeeded."
else
    echo "Test failed.  Output diff:"
    echo $output
fi
