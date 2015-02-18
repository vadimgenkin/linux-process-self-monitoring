/*
 * main.c
 *
 *  Created on: Feb 18, 2015
 *      Author: vadim
 */

#include <stdio.h>

void start_self_monitoring()
{
	while(1) {
		int pid = fork();
		switch(pid) {
		case -1: //error
			perror("fork failed");
		case 0: //child
			return; //continue to execute the code from main
		default: //parent
			printf("start monitoring for pid: %d\n", pid);
			int child_status;

			//wait for child process to terminate
			wait(&child_status);
			//child pid has terminated with status (child_status)
			sleep(1);
		}
	}

}

int main(int argc, char *argv[])
{
	start_self_monitoring();

	//here you can do some useful work
	while(1)
	{
		printf("working...\n");
		sleep(1);
	}

	return 0;
}
