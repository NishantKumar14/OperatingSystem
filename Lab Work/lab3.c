/* 
	Write a C Program to demonstrate the Zombie Process.
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() 
{
	printf("Name : Nishant \nSection : A \nStudent Id : 20011940\n");

	int pid;
	if (pid > 0)
	{
		sleep(10);
		printf("This is Parent Process.\n");
		printf("Parent Pid Process: %d\n", getpid());
	}
	else {
		printf("This is Child Process.\n");
		printf("Child Pid Process : %d\n", getpid());
		exit(0);
	}
	return 0;
}
