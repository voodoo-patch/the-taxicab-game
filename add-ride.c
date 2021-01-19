#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/*
* This program is responsible to create new rides requests given by console input
* that will be served by the first free taxi process.
* This will likely call another process that will manage requests
* given from console either from master process
*/
int main(){
	// 1. gather console input
	// 2. call request-generator
}