#!/bin/bash

RED="\e[31m"
GREEN="\e[32m"
YELLOW="\e[33m"
RESET="\e[0m"

TARGET=/usr/local/bin/echo++

if test -f "$TARGET"; then

    printf "${YELLOW} [INFO] uninstalling echo++... ${RESET} \n"
    sudo rm -f "$TARGET"
    printf "${GREEN} [OK] uninstallation done. ${RESET} \n"

else

    printf "${RED} [ERROR] no such file '"$TARGET"'. ${RESET} \n"

fi