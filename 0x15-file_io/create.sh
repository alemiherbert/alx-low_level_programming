#!/bin/bash

# Get today's date in the format YYYYMMDD
today=$(date +"%Y%m%d")

# Iterate through all files in the current directory
for file in *; do
  # Check if the item is a regular file (not a directory or symlink)
  if [[ -f "$file" ]]; then
    # Set the creation date of the file to today's date
    touch -t "${today}0000" "$file"
  fi
done

