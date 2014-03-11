#include <arch/arm/include/asm/unistd.h>
#include <errno.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	printf("owr TEST START");
	syscall(__NR_ptree, 0, 0);
	printf("owr TEST FNISHED");
	return 0;
}


