#include <iostream>
#include <climits>
using namespace std;
int main()
{
    string n;
    int sum=0;
    int inavlid =false;
    cout << "enter the number string-> ";
    getline(cin,n); 
    for(char ch:n){
        if(isdigit(ch)){
            sum= sum+(ch-'0');
        }else{
            inavlid=true;
        }
    
    }
 if(inavlid==true){

 cout << "Please enter a valid number string!" << endl;
    } else {
        cout << "Sum of the string is " << sum << endl;
    }
    return 0;
}