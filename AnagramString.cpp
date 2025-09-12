#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string str1,str2;
cout<<"enter 1st string "<<endl;
cin>>str1;
cout<<"enter 2nd string "<<endl;
cin>>str2;
if(str1.length() != str2.length()){
     cout << "Not an anagram" << endl;
        return 0;
}

sort(str1.begin(),str1.end());
sort(str2.begin(),str2.end());
if(str1 == str2){
    cout<<"String is Anagrams"<<endl;
}
else {
        cout << "Not an anagram" << endl;
    }
return 0;

}