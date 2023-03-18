#include<iostream>
using namespace std;

int main()
{
    int n,count=0,i=0;
    cin>>n;
    int lastdigit;
    int N=n;

    while (N>0)
    {
        N/=10;
        count++;
    } 

    int ArrayofDigits[count];

        while (n>0 && i<count)
        {
            ArrayofDigits[i]=n%10;
            n/=10;
            i++;
        }

    for (int j = 0; j < count; j++)
    {
        cout<<"array of index "<<j<<" is "<<ArrayofDigits[j]<<endl;
    }
    return 0;
}