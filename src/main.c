#include "funcs.h"

int main(int argc, char *argv[]){

    
    if (argc == 3){
        
        // COUNTLEN
        if (strcmp(argv[1], "--len") == 0){

            if (countLen(argv[2]) == 0){
                exit(EXIT_SUCCESS);
            }
            else {
                fprintf(stderr, RED ERROR_MESSAGE_NULL RESET);
                exit(EXIT_FAILURE);
            }
        }

        // TURNRED
        else if(strcmp(argv[1], "--red") == 0){

            if (turnRed(argv[2]) == 0){
                exit(EXIT_SUCCESS);
            }
            else {
                fprintf(stderr, RED ERROR_MESSAGE_NULL RESET);
                exit(EXIT_FAILURE);
            }
        }

        // TURNGREEN
        else if (strcmp(argv[1], "--green") == 0){

            if (turnGreen(argv[2]) == 0){
                exit(EXIT_SUCCESS);
            }
            else {
                fprintf(stderr, RED ERROR_MESSAGE_NULL RESET);
                exit (EXIT_FAILURE);
            }
        }

        // TURNYELLOW
        else if (strcmp(argv[1], "--yellow") == 0){

            if (turnYellow(argv[2]) == 0){
                exit(EXIT_SUCCESS);
            }
            else {
                fprintf(stderr, RED ERROR_MESSAGE_NULL RESET);
                exit(EXIT_FAILURE);
            }
        }

        //REVERSEORDER
        else if (strcmp(argv[1], "--reverse") == 0){

            if (reverseOrder(argv[2]) == 0){
                exit(EXIT_SUCCESS);
            }
            else {
                fprintf(stderr, RED ERROR_MESSAGE_NULL RESET);
                exit(EXIT_FAILURE);
            }
        }

        // TURNUPPER
        else if (strcmp(argv[1], "--upper") == 0){

            if (turnUpper(argv[2]) == 0){
                exit (EXIT_SUCCESS);
            }
            else {
                fprintf(stderr, RED ERROR_MESSAGE_NULL RESET);
                exit(EXIT_FAILURE);
            }
        }

        // TURNLOWER
        else if (strcmp(argv[1], "--lower") == 0){

            if (turnLower(argv[2]) == 0){
                exit (EXIT_SUCCESS);
            }
            else {
                fprintf(stderr, RED ERROR_MESSAGE_NULL RESET);
                exit(EXIT_FAILURE);
            }
        }

        else {
            fprintf(stderr, RED ERROR_MESSAGE_UNKWON_FLAG RESET);
            exit(EXIT_FAILURE);
        }
    }

    else if (argc == 2){

        if (strcmp(argv[1], "--help") == 0){

            printf(
                "echo++ open source CLI software \n"
                "\n"
                "commands: \n"
                "\n"
                "--version: displays the current version installed \n"
                "--help: displays this help message \n"
                "--flags: parameters that change the string \n"
                "\n"
                "flags: \n"
                "\n"
                "--len: counts how many characters there are in the string \n"
                "--red: turns the string into red color \n"
                "--green: turns the string into green color \n"
                "--yellow: turns the string into yellow color \n"
                "--upper: turns the string to uppercase \n"
                "--lower: turns the string to lowercase \n"
                "\n"
                "usage: echo++ --flags [string] \n"
            );

            exit(EXIT_SUCCESS);
        }

        else if (strcmp(argv[1], "--version") == 0){
            
            printf(
                "echo++ 1.0.0 \n"
            );
        }

        else {
            fprintf(stderr, RED ERROR_MESSAGE_UNKWON_ARG RESET);
            exit(EXIT_FAILURE);
        }
    }

    else {
        fprintf(stderr, RED ERROR_MESSAGE_UNKWON_COMMAND RESET);
        exit(EXIT_FAILURE);
    }

    return 0;
}