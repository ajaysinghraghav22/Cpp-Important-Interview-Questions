#include<iostream>
using namespace std;
class incapsulation
{
private:
    int n;
public:
  int setter(int x){
    n=x;
  }
  int getter(){
    return n;
  }
};

int main(){
    int n;
    cout<<"enter the number -> ";
    cin>>n;
    incapsulation s;
    s.setter(n);
cout<<" number is "<< s.getter()<<endl;
}