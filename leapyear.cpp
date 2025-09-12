#include <iostream>
using namespace std;
bool isleap(int leap)
{
    if (leap % 400 == 0)
        return true;
    else if (leap % 100 == 0)
        return false;
    else if (leap % 4 == 0)
        return true;

    else
        return false;
}

int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    if (isleap(n))
    {
        cout << "leap year hai";
    }
    else
    {
        cout << "not ";
    }
}