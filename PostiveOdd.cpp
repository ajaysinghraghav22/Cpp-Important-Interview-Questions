#include<iostream>
using namespace std;
int main(){
    int n ;
   cout<<"enter a number for finding even or Odd-> ";
   cin>>n;
   if(n%2 == 0 && n>=0){
    cout<<"number is Even and num is +ve";
   }
   else{
    cout<<"odd";
   }
}