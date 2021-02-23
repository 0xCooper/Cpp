/*
 * @Descripttion: class的一个案例
 * @version: 
 * @Author: myc
 * @Date: 2021-02-01 23:58:43
 */
#include <iostream>
class Box
{
   public:
      double length;      // 长度
      double breadth;     // 宽度
      double height;      // 高度
   
      double getVolume(void)
      {
         return length * breadth * height;
      }
};
//
int main(int argc, char const *argv[])
{
    Box myBox;          // 创建一个对象
    myBox.getVolume();  // 调用该对象的成员函数
    return 0;
}
