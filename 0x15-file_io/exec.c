#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
	pid_t pid1, pid2, pid3, pid4, pid5;
	int status;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	pid1 = fork();
	pid4 = getpid();
	if (pid1 == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Failed");
			sleep(20);
		}
	} else {
		wait(&status);
		printf("child id1 = %u\nParent id = %u\n", pid1, pid4);
	}
	pid2 = fork();
	if  (pid2 == 0)
	{
		wait(&status);
		if (execve(argv[0], argv, NULL) == -1)
			perror("Failed 2");
	} else {
		wait(&status);
		printf("child id2 = %u\nParent id = %u\n", pid2, pid4);
	}
	pid3 = fork();
	if (pid3 == 0)
	{
		wait(&status);
		if(execve(argv[0], argv, NULL) == -1)
			perror(" Failed 3");
	} else {
		wait(&status);
		printf("child id3 = %u\nParent id = %u\n", pid3, pid4);
	}

	return (0);
}
