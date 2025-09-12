// 47. Write a Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator
#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10;
    cout << " Maximum Number " << (((a + b) + abs(a - b)) / 2) << endl;
    cout << " Minimum Number " << (((a + b) - abs(a - b)) / 2) << endl;
}