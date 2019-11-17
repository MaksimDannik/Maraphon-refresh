#include <unistd.h>

void mx_printchar(char x) {
	write(1, &x, 1);
}
