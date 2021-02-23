/*
 * @Descripttion: 
 * @version: 
 * @Author: myc
 * @Date: 2021-02-02 01:34:45
 */
//const char *与char const * 效果一样，都是不允许修改指针指向的地址空间的值 即把值作为常量
//char * const则是不允许修改指针自身，不能再指向其他地方，把指针自己当作常量使用。
// 需要注意的是，使用char * const 定一个常量指针的时候一定记得赋初始值，否则再其他地方就没法赋值了。
#include <stdio.h>
int main(void)
{
    char buf[] = "hello world";
    char buf2[] = "world hello";
    const char* a = buf;
    char const* b = buf;
    char* const c = buf;
     //*c = 't';//这里变量c已经成了常量
     a = buf2;
     b = buf2;
     //c = buf2;
     
     printf("a is %s\nb is %s\nc is %s \n", a, b, c);
     return 0;
 }