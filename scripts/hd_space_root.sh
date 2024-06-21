#!/bin/bash

used_space=$(df --output=pcent / | tail -n 1 | tr -d ' %')
echo -e "Hd1: ${used_space}%"
