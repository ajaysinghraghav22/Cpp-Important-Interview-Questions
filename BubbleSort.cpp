#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }
    }
}
int printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {43, 54, 23, 42, 45, 43};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    printarr(arr,n);
}