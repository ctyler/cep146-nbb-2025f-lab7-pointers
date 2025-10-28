#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("This is a test message.\n");
	if (argc>1) {
		printf("Argument count: %d\n", argc);
	}
}

