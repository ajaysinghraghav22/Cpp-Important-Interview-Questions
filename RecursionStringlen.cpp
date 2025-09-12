#include<iostream>
using namespace std;
void lenfind(string& str,int len,int &count){
    if(count== str.length()){
        return ;
    }
    count++; 
    lenfind(str,len+1,count);
}

int main(){
    string str;
     int count=0;
    cout<<"Enter the String"<<endl;
    getline(cin,str);
     int len=str.length()-1;
    lenfind(str,len,count);
    cout<<"count is "<<count<<endl;
    

}