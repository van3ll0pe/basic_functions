#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int my_atoi(char *str) {
    int value = 0;
    int nbrNegation = 0;
    int getNumber = 0;
    

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            getNumber = 1;
            value = value * 10 + (str[i] - 48);
        }
        
        if (str[i] == '-' && getNumber == 0) {
            nbrNegation++;
        }
        if (str[i] == '+' && getNumber == 0) {
            if (nbrNegation > 0) {
                nbrNegation--;
            }
        }
    }

    while (nbrNegation-- != 0) {
        value = -value;
    }

    return (value);
}