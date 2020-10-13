#include <stdio.h>
/**
 *main - entry point
 *@argc: argument value print what the word say
 *@argv: argument count
 *Return: zero
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
}
return (0);
}
