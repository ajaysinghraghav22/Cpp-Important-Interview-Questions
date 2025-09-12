#include<iostream>
using namespace std;
void stringrev(string &str ,int len,int s){
if(len <= s){
    cout<<"there is only one charater ";
    return;
}
swap(str[s],str[len]);
stringrev(str, len-1,s+1);
}
int main(){
    string str;
    cout<<"Enter the String ";
    getline(cin,str);
    stringrev(str,str.length()-1,0);
    cout<<"reverse string is -> "<<str;
    
}