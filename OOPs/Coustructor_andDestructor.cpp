#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student
{
    string name;

    public:
    int Roll_no;
    int age;

    Student()
    {
        cout<<"Default Constuctor"<<endl;
    }

    Student(string s, int roll, int age)
    {
        name = s;
        Roll_no = roll;
        Student::age=age;
    }
    
    void getDetails()
    {
        cout<<name<<" "<<Roll_no<<" "<<age;
    }

    ~Student()
    {
        cout<<"\nDestructor"<<endl;
    }

    //operator overloading
    bool operator == (Student &a)
    {
        if(name == a.name && Roll_no == a.Roll_no && age == a.age)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Student a("rohan", 03, 18);
    a.getDetails();

    Student c("lal", 3, 43);
    c.getDetails();

    if(c == a)
    {
        cout<<"\ntrue";
    }

    else
        cout<<"\nFalse";

    return 0;
}