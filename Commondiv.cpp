#include<iostream>
using namespace std;
int main(){
    int first , sec;
    cout<<"Enter first and second number -> "<<endl;
    cin>> first >> sec;
    int gcd=1;
    int minimum=min(first,sec);
   
    for(int i = 1;i<=minimum;i++){
        if(first %i ==0 && sec %i == 0){
            gcd=i;

        }
    }
        cout<<"common minimum common dev is -> "<<gcd<<endl;
        return 0;
}