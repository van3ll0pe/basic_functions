#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *my_strcat(char *dest, char *src) {
    int i = 0;
    int j = 0;

    while(dest[i++] != '\0') {
    }

    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}