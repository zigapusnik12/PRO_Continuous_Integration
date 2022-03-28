#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

void printd(header* format, int i, char* niz) {
    char *str;
    int len;
    len = strlen(*format->text[i]) + strlen(niz) + 1;
    str = (char*) malloc(len);
    strcpy(str, *format->text[i]);
    strcat(str, niz);
    printf("%s", str);
    free(str);
}