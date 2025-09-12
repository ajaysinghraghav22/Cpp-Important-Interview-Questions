#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the array number-> ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int smoller = arr[0];
    int larger = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smoller)
        {
            smoller = arr[i];
        }
        else if (larger < arr[i])
        {
            larger=arr[i];
        }
    }
      cout << "Min: " << smoller << endl;
    cout << "Max: " << larger << endl;
}