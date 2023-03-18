#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int real;

    public:
    int img;

    Complex(int real = 0, int img = 0)
    {
        Complex::real = real;
        Complex::img = img;
    }

    void Print()
    {
        cout<<real<<"+ i"<<img<<endl;
    }

    Complex operator + (Complex& c2)
    {
        Complex ans;
        ans.real = real + c2.real;
        ans.img = img + c2.img;

        return ans;
    }
    
    //second method
    // friend Complex operator + (Complex& c1, Complex& c2)
    // {
    //     Complex ans;
    //     ans.real = c1.real + c2.real;
    //     ans.img = c1.img + c2.img;

    //     return ans;
    // }

    bool operator ==(Complex& c)
    {
        if(real == c.real && img == c.img)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Complex c1(2, 3); Complex c2(3,3);

    Complex c3 = c1 + c2;

    c3.Print();

    if(c3 == c1)
        cout<<"True";
    
    else 
        cout<<"False";
    return 0;
}