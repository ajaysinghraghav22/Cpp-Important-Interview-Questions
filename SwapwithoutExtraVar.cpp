//44. Write a Program to  Swap the Values of Two Variables Without Using any Extra Variable
#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int y = 4;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"x "<<x<<endl;
    cout<<"y "<<y<<endl;

}