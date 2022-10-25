#!/usr/bin/env bash

if [ "$EUID" -ne 0 ]
  then echo "Please run as root -- use \"sudo bash build.sh\""
  echo
  echo "[SCRIPT FAIL]"
  echo
  exit
  else echo "welcome, super user."
fi

echo "woah this works!";