#include<stdio.h>
#include<math.h>
int main(){
    int i,j;
    printf("100以内的素数有：\n");
    for(i=2;i<100;i++){
        for(j=2;j<sqrt(i);j++){
            if(i%j==0){
            break;//不是素数   i不是素数就不会循环完就跳出
            }
        }
            if(j>sqrt(i)){   //成功循环完的就是素数
            printf("%d,\t",i);
            }
    }
}