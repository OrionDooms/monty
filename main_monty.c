#include "monty.h"

int main()
{

	char *pass = "pass";
	char *buffer;
	size_t s = 32;
	size_t num;

	buffer = malloc(sizeof(s * sizeof(char)));
	while(1)
	{
		num = getline(&buffer, &s, stdin);
		if (num == atoi(pass))
		{
			printf("TRUE");
		}
		else
			printf("FALSE");
	}
}
