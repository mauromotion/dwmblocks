#!/bin/bash

vol="$(wpctl get-volume @DEFAULT_AUDIO_SINK@ | awk '{print $2}')"
percentage=$(printf "%.0f\n" $(echo "$vol * 100" | bc))

echo -e "$percentage%"
