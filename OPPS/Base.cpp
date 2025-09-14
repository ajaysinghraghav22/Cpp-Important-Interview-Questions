//Write a Program to Implement the Concept of Function Overriding or Runtime Polymorphism
#include<iostream>
using namespace std;
class Base
{
public:
    virtual void print(){
        cout<<"print function from base class"<<endl;
    }

void fun(){
    cout<<"fun from the base class "<<endl;
}

};
class parent: public Base{
    public:
    void print() { cout << "print parent class" << endl; }

    void fun() { cout << "show parent class" << endl; }
};


int main(){
    Base* b;
    parent p;
    b=&p; 
    b->print();
     b->fun();
    return 0;

}