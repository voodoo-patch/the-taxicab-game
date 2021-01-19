#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/*
* This program is responsible to check for resource availability
* such as max concurrency for the given cell, ecc..
*/
int isCellAvailable(int* address);