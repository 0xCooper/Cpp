/*
 * @Descripttion: inline内联函数将函数在使用的地方再复制一份，是一种牺牲空间换时间的做法
 * @version: 
 * @Author: myc
 * @Date: 2021-02-02 00:26:43
 */
#include <iostream>
 
using namespace std;

inline int Max(int x, int y)
{
   return (x > y)? x : y;
}

// 程序的主函数
int main( )
{

   cout << "Max (20,10): " << Max(20,10) << endl;
   cout << "Max (0,200): " << Max(0,200) << endl;
   cout << "Max (100,1010): " << Max(100,1010) << endl;
   return 0;
}