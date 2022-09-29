/*
	Write a C program to demonstrate the Orphan Process.
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	printf("Name : Nishant \nSection : A \nStudent Id : 20011940\n");

	int pid;

	pid = fork();

	if (pid > 0) 
	{
		printf("This is Parent Process.\n");
		printf("Parent Pid Process : %d\n", getpid());
	}
	else {
		sleep(10);
		printf("This is Child Process.\n");
		printf("Child Pid Process : %d\n", getpid());
	}
	return 0;
}
