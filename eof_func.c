#include "shell.h"
/**
 * eof_func - For end-of-file condition.
 * @c: A char.
 */

void eof_func(char c)
{
	write(STDOUT_FILENO, &c, 2);

}

