#include <iostream>
using namespace std;
int main()
{
    int n,original,digit ,rev=0;
    cout << "enter the number ";
    cin >> n;
    original = n;
    while(n>0){
        digit = n%10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    if(rev == original) cout<<"palindrom";
    else cout<<"not";
 
}