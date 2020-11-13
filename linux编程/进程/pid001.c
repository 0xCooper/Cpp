#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    pid_t pid;
    int i;
    for(int i=0;i<5;i++)
    {
    if((pid=fork())==0)
    break;
    }
    if(pid==-1){
        perror("fork error");
        exit(1);
    }else if(pid >0){
    printf("parent process:pid=%d\n,getpid ()");

    }else if(pid ==0){
    printf("I am child pid =%d",i+1,getpid());
    }
    return 0;
}
