#!/bin/bash

used_space=$(df --output=pcent /media/Linux_Data | tail -n 1 | tr -d ' %')
echo -e "Hd2: ${used_space}%"
