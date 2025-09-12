#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "enter the number-> ";
    cin >> n;
    int arr[n];
    cout << "enter the number of array-> ";
    if (n < 2)
    {
        cout << "Array must have two elements ";
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first = INT_MAX;
    int second = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    if (second == INT_MAX)
    {
        cout << "No second smallest element (all elements are same)." << endl;
    }

    else
    {
        cout << "Min: " << first << endl;
        cout << "Max: " << second << endl;
    }
    return 0;
}