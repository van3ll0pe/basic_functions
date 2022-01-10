#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

ssize_t my_getline(char **lineptr, FILE *stream) {
    int value = 0;
    int tmpValue = 1;
    ssize_t i;
    char *tmp; //check si le realloc n'a pas de problème

    if ((*lineptr) == NULL) {
        (*lineptr) = malloc(sizeof(char) * tmpValue);
        if ((*lineptr) == NULL) {
            return -1;
        }
    }

    for (i= 0; (value = fgetc(stream)) != '\n' && value != EOF; i++) {
        if (i >= tmpValue) {
            tmp = realloc((*lineptr), sizeof(char) * (++tmpValue));
            if (tmp == NULL){
                return -1;
            }

            (*lineptr) = tmp;
        }
        (*lineptr)[i] = value;
    }


    tmp = realloc((*lineptr), sizeof(char) * (++tmpValue));
    if (tmp == NULL){
        return -1;
    }
    (*lineptr) = tmp;
    (*lineptr)[i] = '\0';

    return i;
}
