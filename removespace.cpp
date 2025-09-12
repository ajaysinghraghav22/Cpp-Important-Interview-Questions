#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter the string-> ";
    getline(cin,str);
    string res ="";
    for(int i = 0 ; i<=str.length();i++){
    if(str[i] != ' '){
        res += str[i];
    }
     }
     cout<<res << " result after removing space"<<endl;
}