#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("This is a test message.\n");
	if (argc>1) {
		printf("Argument count (in addition to binary): %d\n", argc - 1);
	}
}

