#include <iostream>
using namespace std;

bool ispalindrom(string&str,int start,int end){
    if(str[start]>=str[end]){
        return true;
    }
     if (str[start] != str[end]) {
        return false;
    }
    ispalindrom(str,start+1,end-1);

}
int main()
{
    string str;
    cout << "Enter the String for palindrom ";
    getline(cin, str);
    if(ispalindrom(str,0,str.length()-1)){
        cout<<"String is palindrom "<<endl;
    }
    else{
        cout<<"not a palindrom "<<endl;
    }

}