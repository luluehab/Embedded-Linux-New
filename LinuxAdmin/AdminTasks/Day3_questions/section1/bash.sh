#!/bin/bash


if [ -f "$HOME/.bashrc" ]; then
 
  echo "export HELLO=\$HOSTNAME" >> "$HOME/.bashrc"
  echo "export LOCAL=\$(whoami)" >> "$HOME/.bashrc"
  echo "append variables"
else
  # Print a message indicating that the .bashrc file was not found
  echo ".bashrc file not found in your home directory."
fi

# Open another terminal
xterm &
