#!/bin/bash

test  `cat stdin.txt | ./wvuhello | grep "Max value" | awk -F: '{print $2}'` -eq 4
