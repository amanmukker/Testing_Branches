#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *c = malloc(sizeof(10));
	fgets(c, 10, stdin);
	//c[10] = '\0';
	printf("This is what was entered: %s\n", c);
} 
