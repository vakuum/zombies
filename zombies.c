/* http://github.com/vakuum/zombies */
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int n = 1;

	if (argc > 1) {
		n = atoi(argv[1]);
	}

	for (; n > 0; n--) {
		if (fork() == 0) {
			exit(0);
		}
	}

	pause();

	return 0;
}
