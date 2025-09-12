#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "enter two number";
    cin >> n >> k;
    int minimum = min(n, k);
    int gcf = 1;
    for (int i = 1; i <= minimum; i++)
    {
        if (n % i == 0 && k % i == 0)
        {
            gcf = i;
        }
    }
    long long lcm =( 1LL*n*k)/gcf;
    cout << "GCD: " << gcf << endl;
    cout << "LCM: " << lcm << endl;
}