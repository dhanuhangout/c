#include <string.h>
#include "mystrlib.h"

int mystrlen(char *str) {
	/* This function returns length of string. */
	int str_len = 0;
	while(*str) {
		str_len++;
		str++;
	}
	return str_len;
}
