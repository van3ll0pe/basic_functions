#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


char *my_strstr(char *fullBuffer, char * search) {
    char * final; //le pointeur qui va pointer sur l'élément de fullBuffer
    int i = 0;
    int j = 0;//si index est égal à strlen(search) alors le mot est dans fullbuffer

    for (i = 0; fullBuffer[i] != '\0'; i++) {
        if (fullBuffer[i] == search[j]) {
            j++;
        } else {
            j = 0;
        }

        if (j == strlen(search)) {
            final = &fullBuffer[i - j + 1];
        }
    }

    if (j != strlen(search)) {
        final = NULL;
    }

    return final;
}
 