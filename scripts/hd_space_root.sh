#!/bin/bash

used_space=$(df --output=pcent / | tail -n 1 | tr -d ' %')
echo -e "HD1: ${used_space}%"
