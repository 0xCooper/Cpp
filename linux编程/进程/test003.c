#include<stdio.h>
#include<sys/sys/wait.h>
#include<stdlib.h>

int main(){

pid_t pid;
  pid = fork();
    if(pid==-1)
    {
        perror("fork error");
        exit(1);
    }else if(pid==0)
    {
        sleep(3);
        printf("child process:pid=%d\n",getpid());
    }
    else if(pid>0)
    {
    w=wait(NULL);
    printf("catched a child process,pid=%d\n",w);
    }

}
