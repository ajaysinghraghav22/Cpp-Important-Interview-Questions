#include<iostream>
using namespace std;
class Compiletimepolymor
{

public:
void animal( string animals){
   cout<<"animal is a big community and "<<animals<<" comes in it"<<endl;
}
void animal( string aniaml,int count){
   cout<<"animal is a "<<aniaml<<" num of is "<<count<<endl;
}
void animal( string dog,int count,string color){
  cout<<"animal is a "<<dog<<" num of is "<<count<<" and color is "<<color<<endl;
}
   
};


int main(){
    Compiletimepolymor s;
    s.animal("cow");
     s.animal("dog",7);
     s.animal("dog",7,"black");

}