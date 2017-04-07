#!/bin/bash

test  `cat stdin.in | ./wvuhello | grep "Max value" | awk -F: '{print $2}'` -eq 4
