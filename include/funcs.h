#ifndef FUNCS_H
#define FUNCS_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ERROR_MESSAGE_NULL "fatal: argument can not be NULL. Try '--help'. \n"
#define ERROR_MESSAGE_UNKWON_FLAG "fatal: unkwown -flag. Try '--help'. \n"
#define ERROR_MESSAGE_UNKWON_ARG "fatal: unkwown argument. Try '--help'. \n"
#define ERROR_MESSAGE_UNKWON_COMMAND "fatal: unkwown command. Try '--help'. \n"

#define RED    "\x1b[31m"
#define GREEN  "\x1b[32m"
#define YELLOW "\x1b[33m"
#define RESET  "\x1b[0m"

int countLen(char *argv);

int turnRed(char *argv);

int turnGreen(char *argv);

int turnYellow(char *argv);

int reverseOrder(char *argv);

int turnUpper(char *argv);

int turnLower(char *argv);

#endif