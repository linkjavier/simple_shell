#include "shell.h"
/**
 * eof_func - For end-of-file condition.
 * @c: A char.
 */

void eof_func(char c)
{
	write(1, &c, 2);
}

