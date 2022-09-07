#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main()
{
	pid_t my_pid;
	int i, status;
	char *cmd, word[] = "/bin/ls", *token;
	size_t bytes_read, size = 0;
	char *argv[] = {NULL, NULL, NULL, NULL};

	printf("#cisfun$ ");
	/*cmd = (char *)malloc(sizeof(size));
	if (cmd == NULL)
	{
		printf("No text was inputed!");
		exit(1);
	}*/
	bytes_read = getline(&cmd, &size, stdin);
	i = 0;
	while (cmd[i])
	{
		if (cmd[i] == '\n')
			cmd[i] = '\0';
		i++;
	}
	i = strcmp(cmd, word);
	printf("%s -> %i\n", cmd, i);
	/*argv[0] = cmd;
	printf("%s", cmd);*/
	my_pid = fork();
	argv[0] = cmd;
	if (my_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		perror("failed");
	} else
		wait(&status);
	main();
	
	return (0);
}
