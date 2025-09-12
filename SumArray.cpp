#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "enter the number-> ";
    cin >> n;
    int arr[n];
    int sum =0;
    cout << "enter the number of array-> ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      sum = sum +arr[i];
    }
    cout<<"sum is -> "<<sum;

    return 0;
}