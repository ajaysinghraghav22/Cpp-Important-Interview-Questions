//without using string.length() function;
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter the string -> ";
    cin>>str;
    int len =0;
    for(int i = 0; str[i]!='\0';i++){
         len++;

    }
    cout<<len;
  
}