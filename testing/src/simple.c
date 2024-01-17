#include <stdio.h>
#include <stdint.h>
#include <unistd.h>

char *args[] = {"/bin/sh", 0};

int main() {
	uint64_t is_admin = 0;
	char buf[64];
	gets(buf);

	if (is_admin) {
		execve("/bin/sh", args, args);
		return 0;
	}

	printf("Permission denied - not admin!\n");
	return 0;
}
