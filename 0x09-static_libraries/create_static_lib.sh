#!/bin/bash

# Compile all .c files in the current directory
gcc -c *.c

# Create the static library liball.a
ar rc liball.a *.o

# Index the library for faster linking
ranlib liball.a

# Clean up the object files
rm -f *.o

echo "Static library liball.a created successfully."
