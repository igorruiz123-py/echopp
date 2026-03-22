#!/bin/bash

BIN="bin"

OBJ="obj"

RED="\e[31m"
GREEN="\e[32m"
YELLOW="\e[33m"
RESET="\e[0m"

if test -d "$BIN"; then

    printf "${RED} [ERROR] the directory 'bin' already exists. ${RESET} \n"

else

    printf "${YELLOW} [INFO] making 'bin' directory... ${RESET} \n"
    mkdir $BIN
    printf "${GREEN} [OK] 'bin' done. ${RESET} \n"

fi

if test -d "$OBJ"; then

    printf "${RED} [ERROR] the directory 'obj' already exists. ${RESET} \n"

else

    printf "${YELLOW} [INFO] making 'obj' directory... ${RESET} \n"
    mkdir $OBJ
    printf "${GREEN} [OK] 'obj' done. ${RESET} \n"

fi