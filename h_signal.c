#include "shell.h"

/**
 * h_signal - the Signal Handler
 * @sig: Signal number.
 */

void h_signal(int sig)
{
	write(STDIN_FILENO, "\n$ ", 3);
	fflush(stdout);
	(void)sig;
}
