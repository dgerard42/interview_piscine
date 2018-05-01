#include <stdio.h> //printf, scanf, ...
#include <string.h> //memcpy, strlen, ...
#include <unistd.h> //fork, write, sleep...
#include <stdlib.h> //malloc, free, exit...

#include "header.h"

int main(int ac, char **av)
{
	char *a;
	char *b;

	if (ac == 4
		&& (strcmp(av[2], "&") == 0 || strcmp(av[2], "|") == 0)
		&& checkBinary(av[1]) && checkBinary(av[3])) {
		a = av[1];
		b = av[3];
	}else{
		printf("usage: ./bit 0010 | 0001\n");
		return (0);
	}
	/*-------------------
	launch your test here
	--------------------*/
	// printf("HERE%s\n", a);
	// printf("%s\n", b);
	char *res;

	if (strcmp(av[2], "&") == 0)
		res = getAnd(a, b);
	else
		res = getOr(a, b);
	printf("%s (%d)\n", res, toInt(res));

	return (0);
}

// Function used for the test
// Don't go further :)

int checkBinary(char *str) {
	int i = 0;

	if (str[i] && str[i] == '~')
		i++;
	while (str[i]) {
		if (str[i] != '0' && str[i] != '1')
			return (0);
		i++;
	}
	if (i == 4 || i == 5)
		return (1);
	return (0);
}
// int			main(void)
// {
// 	char *a;
// 	char *b;
// 	char *res;
//
// 	a = (char *)calloc(5, sizeof(char));
// 	b = (char *)calloc(4, sizeof(char));
// 	a[0] = '~';
// 	for(int i = 1; i <= 4; i++)
// 		a[i] = '0';
// 	for(int i = 0; i < 4; i++)
// 		b[i] = '1';
// 	res = getAnd(a, b);
// 	printf("RES%s\n", res);
// 	return(0);
// }
