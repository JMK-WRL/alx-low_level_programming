#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int a;

	a = 0;
	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
