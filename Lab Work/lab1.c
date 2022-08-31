/* 
Write c program in which parent process compute the sum of the even number and child process the sum the odd numbers stored  in array using the fork process. First, the child process should prints its answer i.s. sum of odd number then partent should its answer i.e. sum of even number.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	int pid;
	pid = fork();
	if (pid == 0) {
		for(int i = 0; i < n; ++i) {
			if (arr[i] % 2 != 0) {
				sum += arr[i];
			}
		}
		printf ("Child Process : %d \n", sum);
	}
	else {
		for(int i = 0; i < n; ++i) {
			if (arr[i] % 2 == 0) {
				sum += arr[i];
			}
		}
		printf("Parent Process : %d \n", sum);
	}
	
	return 0;
}
