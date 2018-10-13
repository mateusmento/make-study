#include <write.h>
#include <calc.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void trim(char* str, size_t n)
{	
	int i = 0, j = 0;

	for (;str[i] != '\0' && i < n; i++, j++)
	{
		while(str[i] == ' ') i++;
		str[j] = str[i];
	}

	str[j] = '\0';
}


int main(int argc, char** argv)
{
	char args[3][32];
	real_t a = 0, b = 0;
	const char* op;

	do {
		scanf("%s %s %s", args[0], args[1], args[2]);
		putchar('\b');

		if (!strcmp(args[0], "q")) break;

		if (!strcmp(args[0], "fib"))
		{
			a = atof(args[2]);
			op = "fib of";
		}
		else
		{
			a = atof(args[0]);
			b = atof(args[2]);
			op = args[1];
		}

		printf(" = %.1f", calc(a, b, op));

	} while (1);
}

