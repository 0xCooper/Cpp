#include <stdio.h>
int f(int n){
if(n==1 || n==2)
return 1;
else
return (f(n-2)+f(n-1));
}
int main(){
const int num = 20;
int i;
for(i=1;i<=num;i++){
printf("%-6d",f(i));
if(i%5==0)
printf("\n");
}
printf("\n");
return 0;
}
