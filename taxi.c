#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void move();
/*
* This program is responsible of ride serving
*/
int main(){
	// 1. wait for new ride req
	// 2.0 serving ride
	// 2.1 determine next location according to resource availability (availability-manager)
	// 2.2 notify the master of new movement
	// 2.3 wait (simulate crossing)
	// 2.4 if at destination 
	// 			notify master - return to 1
	//     else
	//			return to 2.1
}

void move(){

}