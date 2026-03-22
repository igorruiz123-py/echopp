#include "funcs.h"

int countLen(char *argv){

    if (argv == NULL){
        return -1;
    }

    int len = strlen(argv);

    fprintf(stdout, "%d \n", len);

    return 0;
}

int turnRed(char *argv){

    if (argv == NULL){
        return -1;
    }

    fprintf(stdout, RED "%s \n" RESET, argv);

    return 0;
}

int turnGreen(char *argv){

    if (argv == NULL){
        return -1;
    }

    fprintf(stdout, GREEN "%s \n" RESET, argv);

    return 0;
}

int turnYellow(char *argv){

    if (argv == NULL){
        return -1;
    }

    fprintf(stdout, YELLOW "%s \n" RESET, argv);

    return 0;
}

int reverseOrder(char *argv){

    if (argv == NULL){
        return -1;
    }

    int len = strlen(argv);

    int start = 0;
    int end = len - 1;

    while (start < end){

        char temp = argv[start];
        argv[start] = argv[end];
        argv[end] = temp;

        end--;
        start++;
    }

    fprintf(stdout, "%s \n", argv);

    return 0;
    
}

int turnUpper(char *argv){

    if (argv == NULL){
        return -1;
    }

    for (int i = 0; argv[i] != '\0'; i++){

        argv[i] = toupper(argv[i]);
    }

    fprintf(stdout, "%s \n", argv);

    return 0;

}

int turnLower(char *argv){

    if (argv == NULL){
        return -1;
    }

    for (int i = 0; argv[i] != '\0'; i++){

        argv[i] = tolower(argv[i]);
    }

    fprintf(stdout, "%s \n", argv);

    return 0;

}