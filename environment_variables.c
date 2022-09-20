#include <stdio.h>

int main(int argument_count, char ** argument_value,
	char ** extern_environ) {

	int loop = -1;

	while (extern_environ[++loop]) {

		printf("%s\n", extern_environ[loop]);
	
	}

}
