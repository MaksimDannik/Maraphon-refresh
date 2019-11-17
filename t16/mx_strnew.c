//#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size) {
	char* str = 0;	
	if (size < 0) 
		return NULL;
		str = (char *) malloc((size + 1) * sizeof(char));
		for (int i = 0; i < size; i++) {
			str[i] = '\0';
		}
	return str;
}

//int main() {
//	printf("%s\n", mx_strnew(10));
//}
