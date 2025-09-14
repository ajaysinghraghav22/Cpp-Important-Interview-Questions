#include <iostream>
using namespace std;
class operatorOverloading
{
private:
    float n, k;

public:
    operatorOverloading(float a = 0, float b = 0) {
        n=a;
        k=b;
    };

operatorOverloading operator+(const operatorOverloading& obj ){
    operatorOverloading temp;
    temp.n= n+ obj.n;
    temp.k= k+ obj.k;
     return temp;
}

 void display()
{
    cout << "sum is -> " << n + k;
}

};

int main()
{
    operatorOverloading s1(44.5, 23.8);
    operatorOverloading s2(4.5, 2.5);

    operatorOverloading result = s1 + s2;
    result.display();
}