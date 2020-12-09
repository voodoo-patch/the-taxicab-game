#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/*
* This program represents the master process that spawns and orchestrates
* taxi processes by assigning rides and managing resources (avilability, starvation, deadlock, ecc)
*/
int main(){

	int opts = 0;
	int *status;
    unsigned int my_pid, my_ppid, value; 
	value = fork();
	if(value > 0){
		// parent branch
		my_ppid = getppid();
		my_pid = getpid();
		printf("Parent - PID=[%d], PPID[%d], fork_value=%d\n", my_pid, my_ppid, value);
		sleep(1);
	} else if(value == 0){
		// child branch
		my_ppid = getppid();
		my_pid = getpid();
		printf("Child - PID=[%d], PPID[%d], fork_value=%d\n", my_pid, my_ppid, value);
	} else {
		// error branch
		printf("Fork error");
	}

	exit(EXIT_SUCCESS);
}