#include <stdio.h>

int main() {

	int x = 59, * pointer_x = &x;

	int ** pointer_to_pointer_x = &pointer_x;

	printf("\033c");

	printf("Value of x with %%i = %i\n", x);
	printf("Value of x with %%d = %d\n", x);
	printf("Value of x with %%x = %x\n", x);
	printf("Value of x with %%p = %p\n\n", x);

	printf("Address of x with %%x = %x\n", &x);
	printf("Address of x with %%x = %x\n", pointer_x);
	printf("Value   of x with %%x = %x\n", * pointer_x);
	printf("%%x is format specifier");
	printf(" to print a variable in hexadecimal\n\n");

	printf("Address of x                    with %%p = %p\n", &x);
	printf("Value of pointer_x              with %%p = %p\n", pointer_x);
	printf("Value of pointer_to_pointer_x   with %%p = %p\n",
		pointer_to_pointer_x);
	printf("Address of pointer_to_pointer_x with %%p = %p\n",
		&pointer_to_pointer_x);

	printf("%%p is format specifier to print ");
	printf("the full address of a variable\n\n");

}
