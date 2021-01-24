#include<iostream>

struct Student
{
    int a;
    int b;
    int c;
    int d;


 int Plus()
 {
     return a+b+c+d;

 }
};

int main(int argc ,char *argv[])
{
    Student s = {1,2,3,4};
    int r = s.Plus();
    printf("%d",r);
    
    
    

    return 0;

}