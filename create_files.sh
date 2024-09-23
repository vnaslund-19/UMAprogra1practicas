#!/bin/bash

# First param: Number of lab
# Second param: Number of files (excersises) 

# Check if the correct number of parameters is passed
if [ "$#" -ne 2 ]; then
  echo "Usage: $0 <first_number> <number_of_files>"
  exit 1
fi

first_number=$1
num_files=$2

# Loop through and create the required number of files
for ((i=1; i<=num_files; i++)); do
  filename="p${first_number}e${i}.c"
  touch "$filename"
  echo "Created file: $filename"
done

