#!/bin/bash

RED="\e[31m"
GREEN="\e[32m"
YELLOW="\e[33m"
RESET="\e[0m"

ECHOPP="bin/echo++"

DIR="obj"

FILES=("main.o" "funcs.o")

found=0

if test -f "$ECHOPP"; then

    printf "${YELLOW} [INFO] removing echo++... ${RESET} \n"
    rm -f "$ECHOPP"
    printf "${GREEN} [OK] removal done. ${RESET} \n"

else

    printf "${RED} [ERROR] no such file '"$ECHOPP"' found. ${RESET} \n"

fi

for file in "${FILES[@]}"; do
    path="$DIR/$file"

    if test -f "$path"; then
        if [ "$found" -eq 0 ]; then
            printf "${YELLOW} [INFO] removing files... ${RESET} \n"
            found=1
        fi

        printf "${YELLOW} [INFO] removing '$file'... ${RESET} \n"
        rm -f "$path"
    fi
done

if [ "$found" -eq 1 ]; then
    printf "${GREEN} [OK] files removed. ${RESET} \n"
else
    printf "${RED} [ERROR] no such file 'obj/func.o' or 'obj/main.o' found. ${RED} \n"
fi

