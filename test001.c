#include <stdio.h>

int main(int argc, char *argv[]) {
	int *res;
	printf("This is a demo of pointer math in C.");
	if (argc>1) {
		res = &argc;
		res += 10000;
		printf("Argument count (in addition to binary): %d\n", argc - 1);
		printf("Pointer address for argc:               %p\n", res);
		printf("Argument count (via pointer): 		%d\n", *res );
	} else {
		printf("Program was called without any additional arguments.\n");
	}
}

