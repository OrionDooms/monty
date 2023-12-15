#include "monty.h"
/**
 * Error_file_and_argument - If the user does not give any file
 * or more than one argument to your program.
 */
void Error_file_and_argument(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * Error_open_file - it’s not possible to open the file.
 * @str: The name of the file.
 */
void Error_open_file(char *str)
{
	fprintf(stderr, "Error: Can't open file %s\n", str);
	exit(EXIT_FAILURE);
}
/**
 * file_contains_an_invalid_instruction - the file contains an invalid
 * iinstruction.
 */
void file_contains_an_invalid_instruction(void)
{
	printf("L<line_number>: unknown instruction <opcode> \n");
	exit(EXIT_FAILURE);
}
/**
 * cant_malloc - If you can’t malloc.
 */
void cant_malloc(void)
{
	printf("Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
