#include "shell.h"

/**
 * handle_signal - the Signal Handler
 * @sig: Signal number.
 */

void handle_signal(int sig)
{
	write(STDIN_FILENO, "\n$ ", 3);
	fflush(stdout);
	(void)sig;
}
