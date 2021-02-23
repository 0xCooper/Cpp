/*
 * @Descripttion: 
 * @version: 
 * @Author: myc
 * @Date: 2021-02-02 01:47:06
 */
#include "MyLib.h"

int test();
int main(int argc, char const *argv[])
{   
    int array[9]={8,1,3,4,5,7,1,33,12};

    printarr(array,9,"/");
    println("*",40,"");
    println("it's my fault");
    print(1);
    print(2);
    print(3);
    //test();
    return 0;
}

int test(int argc, char const *argv[]){
    init(argc,argv);
    char const* test="helloworld";
    println(test);
    int array[9]={8,1,3,4,5,7,1,33,12};
    bsort(array,9);
    printarr(array,9);
    // printf("%p",&array[8]);
    print("ha",100,"");//下次再写个字符串复制，并返回一个长字符串，并写一个四参的，可以制定第几次重复去输出这个
    //实现print(ptr) 直接打印中间的数字



       int a[3]={1,2,3};
    print(a[1],"\n");
    println("hello");
    print("hello");
    print("c is intresting",5,"\n");
    print("c could be python","");//字符串在给个结尾
    return 0;
}