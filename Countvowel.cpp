#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string-> "<<endl;
    getline(cin,str);
    string res=" ";
    for(int i = 0; str[i]!='\0' ; i++){
        char ch =str[i];
           if(!(ch =='a' ||ch =='e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U')){
res =res + ch;
    }
    }
    cout<<res <<" result after removing vowels";

}