#include<iostream>
using namespace std;
class Abbstraction
{
private:
   int a,b;

public:
int setter(int x, int y)
    {
        a = x;
        b = y;
    }
  int print(){
  
    cout<<"sum is -> "<<a+b<<endl;
  }
};


int main(){
    Abbstraction a;
    a.setter(12,12);

}