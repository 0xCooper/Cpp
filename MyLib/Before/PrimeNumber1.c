//判断是否为素数

#include <stdio.h>
#include<math.h>
int main()
{
    int n, i, flag = 0;
 
    printf("输入一个正整数: ");
    scanf("%d",&n);
 
    for(i=2; i<=sqrt(n); ++i)
    {
        // 符合该条件不是素数
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
 
    if (flag==0)
        printf("%d 是素数",n);
    else
        printf("%d 不是素数",n);
    
    return 0;
}