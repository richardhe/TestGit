#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char* argv[])
{
	pid_t pid;
	pid = fork();
	
	if(pid < 0)	//没有创建FORK成功
	{
		perror("fork");
	}
	
	if(0 == pid)	//子进程
	{
		while(1)
		{
			printf("I am son");
			sleep(1);
		}	
	}
	else if(pid > 0)	//父进程
	{
		while(1)
		{
			printf("I am father");
			sleep(1);
		}
	}
	return 0;
}
