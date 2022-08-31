// Write a c program demonstrate the use of "fork" system call.


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  
	int pid;
  
	fork();
  
	for(int i = 0; i < 3; i++) {
		printf("Hello World  %d \n", getpid());
	}
  
	return 0;
}
