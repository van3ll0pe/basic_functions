#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strdup(char *src) {
    char *dest = malloc(sizeof(char) * strlen(src) + 1);
    int i = 0;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    dest[i] = '\0';

    return dest;
}