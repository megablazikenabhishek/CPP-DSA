#include <iostream>
using namespace std;

class student
{
    private:
    string name;

    public:
    int Roll_no;
    int age;

    student()
    {
        cout<<"Hello";
    }

    void setName(string name)
    {
        student::name = name;
    }

    void getDetails()
    {
        cout<<name<<" "<<Roll_no<<" "<<age;
    }

    string getName()
    {
        return name;
    }

    //copy
    student(student &b)
    {
        name = b.name;
        Roll_no = b.Roll_no;
        age = b.age;
    }
};  //encapsulation

int main()
{
    int n;
    cin>>n;

    student arr[n];
    string name;

    for (int  i = 0; i < n; i++)
    {
        cout<<"Name = ";
        cin>>name;
        arr[i].setName(name);

        cout<<"Roll_no = ";
        cin>>arr[i].Roll_no;

        cout<<"Age = "<<endl;
        cin>>arr[i].age;
    }
    
    for (int  i = 0; i < n; i++)
    {
        cout<<"Name = "<<arr[i].getName();

        cout<<"\nRoll_no = "<<arr[i].Roll_no;
    
        cout<<"\nAge = "<<arr[i].age;
    }

    student b = arr[0];

    return 0;
}