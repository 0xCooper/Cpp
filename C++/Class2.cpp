/*
 * @Descripttion: 继承，派生类
 * @version: 
 * @Author: myc
 * @Date: 2021-02-02 00:22:27
 */

// // 基类
// class Animal {
//     // eat() 函数
//     // sleep() 函数
// };


// //派生类
// class Dog : public Animal {
//     // bark() 函数
// };


#include <iostream>
 
using namespace std;
 
// 基类
class Shape 
{
   public:
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }
   protected:
      int width;
      int height;
};
 
// 派生类
class Rectangle: public Shape
{
   public:
      int getArea()
      { 
         return (width * height); 
      }
};
 
int main(void)
{
   Rectangle Rect;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
 
   // 输出对象的面积
   cout << "Total area: " << Rect.getArea() << endl;
 
   return 0;
}