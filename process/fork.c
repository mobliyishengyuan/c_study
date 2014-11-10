#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <errno.h>
#include <math.h>
int main(int argc, char **argv)
{
	pid_t child;
	int status;
	printf("This will demostrate how to get child status\n");

	// when fork fail, it return -1
	if ((child = fork()) == -1)
	{
		printf("Fork Error : %s\n", strerror(errno));
		exit(1);
	}
	// child process
	else if (child == 0)
	{
		int i;
		printf("I am the child : %ld\n", getpid());
		for (i = 0;i < 10;i ++)
		{
			printf("child res %f\n", sin(i));
		}
		printf("child %ld exit 5 \n", getpid());
		exit(5);
	}
	// parent process
		printf("parent %ld start to wait\n", getpid());

	while (((child = wait(&status)) == -1) & (errno == EINTR))
	{
		printf("parent %ld is waiting\n", getpid());
		// child process exec fail
		if (child == -1)
		{
			printf("Wait Error : %s\n", strerror(errno));
		}
		// child exit 0
		else if (!status)
		{
			printf("Child %ld terminated normally retrun status is zero\n"
				, child);
		}
		// child exit not 0
		else if (WIFEXITED(status))
		{
			printf("Child %ld terminated normally retrun status is %d\n"
				, child, WEXITSTATUS(status));
		}
		// child exit without signal
		else if (WIFSIGNALED(status))
		{	
			printf("Child %ld terminated due to signal %d znot caught\n"
				, child, WTERMSIG(status));
		}
	}
	printf("parent %ld end\n", getpid());
}
