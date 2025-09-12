#include<iostream>
using namespace std;
int main(){
    int a, b , c;
    cout<<"Enter three a , b , c Number - > ";
    cin>> a >> b >> c;
    if(a>=b && a>=c){
        cout<< a << " is a greater "<<endl;
    }
     else if(b>=a && b>=c){
        cout<< b << " is a greater "<<endl;
    }
    else{
        cout<< c << " is a greater"<<endl;
    }

}