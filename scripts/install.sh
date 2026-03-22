#!/bin/bash

RED="\e[31m"
GREEN="\e[32m"
YELLOW="\e[33m"
RESET="\e[0m"

TARGET=bin/echo++

DEST=/usr/local/bin

if test -f "$TARGET"; then

    printf "${YELLOW} [INFO] installing echo++... ${RESET} \n"
    sudo cp "$TARGET" "$DEST"
    printf "${GREEN} [OK] installation done. ${RESET} \n"

else

    printf "${RED} [ERROR] no such file 'bin/echo++'. ${RESET} \n"

fi