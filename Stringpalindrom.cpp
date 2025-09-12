#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string ";
    getline(cin, str);
    int strStart = 0;
    bool ispalindrom = true;
    int strlenEnd = str.length() - 1;
    while (strStart < strlenEnd)
    {
        if (str[strStart] != str[strlenEnd])
        {
            ispalindrom = false;
            break;
        }
        strStart++;
        strlenEnd--;
    }

    if (ispalindrom)
    {
        cout << "string is a palindrom ";
    }
    else
    {
        cout << "not a palindrom ";
    }
    return 0;
}