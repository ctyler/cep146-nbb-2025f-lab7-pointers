#include <stdio.h>

int main(int argc, char *argv[]) {
	int *res;
	printf("This is a test message.\n");
	if (argc>1) {
		res = (void*) 1000000000;
		printf("Argument count (in addition to binary): %d\n", argc - 1);
		printf("Pointer address for argc:               %p\n", res);
		printf("Argument count (via pointer): 		%d\n", *res );
	}
}

