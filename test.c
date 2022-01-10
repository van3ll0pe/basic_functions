#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a = 5;
	int *ptr = &a;

	printf("adresse de a : %p - %p - %p\n", ptr, &a, &ptr[0]);
	printf("adresse du pointeur : %p\n", &ptr);
	printf("valeur de a : %d - %d - %d\n", *ptr, a, ptr[0]);

	int **ptr2 = &ptr;

	printf("adresse de ptr : %p - %p\n", &ptr, ptr2);
	printf("adresse de ptr2 : %p\n", &ptr2);
	printf("valeur de ptr : %p - %p\n", ptr, *ptr2);
	printf("valeur stockée dans l'adresse mémoire que le pointeur stocke: %d - %d - %d - %d\n\n\n", *ptr, ptr[0], **ptr2, *ptr2[0]);
	
	char *str = malloc(sizeof(char) *40);
	char *startStr = str;
	strcpy(str, "CSGO");

	printf("l'adresse de notre pointeur str : %p\n", &str);
	printf("l'adresse stockée dans notre pointeur str : %p\n", str);
	printf("la valeur stockée dans l'adresse mémoire stockée dans le pointeur str : %c\n", *str);
	
	for (int i = 0; str[i] != '\0'; i++) {
		printf("l'adresse mémoire stockée dans le pointeur str : %p\n", &str[i]);
		printf("la valeur stockée dans l'adresse mémoire stockée dans le pointeur str : %c\n", str[i]);
	}
	puts("\n\n\n");
	for (; *str != '\0'; str++) {
		printf("l'adresse mémoire stockée dans le pointeur str : %p\n", str);
		printf("la valeur stockée dans l'adresse mémoire stockée dans le pointeur str : %c\n", *str);
	}
	str = startStr;
	printf("%p\n", str);

	char **str2 = &str;

	printf("adresse du double pointeur : %p\nadresse stockée dans le double pointeur : %p\n valeur stockée dans l'adresse qui est stockée dans le double pointeur : %p\n%c\n", &str2, str2, *str2, **str2);
printf("adresse du double pointeur : %p\nadresse stockée dans le double pointeur : %p\n valeur stockée dans l'adresse qui est stockée dans le double pointeur : %p\net la valeur stockée dans l'adresse du dessus est : %c\n", &str2, str2, str2[0], *str2[0]);

	(*str2)++;
	printf("%p - %p\n%c\n", *str2,str, **str2);
	return 0;
}
