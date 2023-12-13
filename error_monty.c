#include "monty.h"
/**
 * no_file_and_more_argument - If the user does not give any file
 * or more than one argument to your program.
 */
void no_file_and_more_argument(void)
{
	printf("USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * cant_open_the_file - it’s not possible to open the file.
 */
void cant_open_the_file(void)
{
	printf("Error: Can't open file <file> \n");
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
