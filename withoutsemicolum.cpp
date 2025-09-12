//43. Write a Program to Print All Natural Numbers up to N Without Using a Semi-Colon
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    for(int i =1; i <= n && cout<< i <<" ";  i++);
   
    return 0;
}