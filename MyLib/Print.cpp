/*
 * @Descripttion: 一些打印函数的实现
 * @version: 
 * @Author: myc
 * @Date: 2021-02-02 01:16:54
 */

//简单实现println
// #include<stdio.h>


//字符串自动换行
void println(const char* str){
    printf("%s",str);
    printf("\n");
}

void println(int num){
    printf("%d",num);
    printf("\n");
}


//打印数组
int printarr(int arr[],int len){
    int i;
    for(i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

int printarr(int arr[],int len,char const* end ){
    int i;
    for(i=0;i<len;i++)
    {
        printf("%d",arr[i]);
        if ((i+1)==len)
        {
            break;
            /* code */
        }
        
        printf("%s",end);
    }
    printf("\n");
    return 0;
}
//重复打印字符串 
int print(char const* str,int n,char const* end){

    for (int  i = 0; i < n; i++)
    {
        printf("%s",str);
        printf("%s",end);
    }
    return 0;
}
//末尾有换行
int println(char const* str,int n,char const* end){

    for (int  i = 0; i < n; i++)
    {
        printf("%s",str);
        printf("%s",end);
    }
    printf("\n");
    return 0;
}


void print(char const* str,char const* end ){
    printf("%s",str);
    printf("%s",end);
}
void print(int a ){
    printf("%d",a);
}
void print(int a ,char const* end){
    printf("%d",a);
    printf("%s",end);
}
void print(const char* str){
    printf("%s",str);

}