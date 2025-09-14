#include <iostream>
using namespace std;
class base
{
private:
    string name;
    int Id;

public:
    void inputdetails(string name, int Id)
    {
        name = name;
        Id = Id;
    }
    void display()
    {
        cout << "name is-> " << name << endl;
        cout << "Id is-> " << Id << endl;
    }
};
 class drived :public base{
    private:
    int rollno;
    public:
    void inputdetails(string name, int Id,int rollno)
    {
      
        rollno=rollno;
    }
    void display()
    {
        cout << "rollno is-> " << rollno << endl;
    }

 };
 int main(){
    drived d;
    d.inputdetails("ajay",34,893);
    d.display();

 }