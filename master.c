#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/*
* This program represents the master process that spawns and orchestrates
* taxi processes by assigning rides and managing resources (avilability, starvation, deadlock, ecc)
*/

void cleanup();
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
		atexit(cleanup);
		exit(EXIT_FAILURE);
	}


// WEXITSTATUS(existatus) -> shifts status code by 8 bits to the right
/*
	waitpid(-1, &status, WNOHANG | WUNTRACED | WCONTINUED);
	if(WIFEXITED(status)){
		// normal termination
		int actualStatus = WEXITSTATUS(exitstatus);
	} else if(WIFSIGNALED(status)){
		// process killed by signal (sigterm, sigkill, ...)
		int actualStatus = WTERMSIG(exitstatus); // sig number that caused termination
	} else if(WIFSTOPPED(status)){
		// process stopped by signal (sigstop, ...)
		int actualStatus = WSTOPSIG(exitstatus); // sig number that blocked the process
	} else if(WIFCONTINUED(status)){
		// process waked by SIGCONT signal
	}
*/
	// not called if interrupted (SIGINT, SIGKILL)
	atexit(cleanup);
	exit(EXIT_SUCCESS);
}

void cleanup(){
	// free memory, close socket, ecc
}