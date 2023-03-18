#include<iostream>
using namespace std;

int main()
{
    char check;
    do
    {
        char alpha;
        cout<<"Enter the Character "<<endl;
        cin>>alpha;

        if (alpha=='a' || alpha=='e' || alpha=='o' || alpha=='u' || alpha=='i')
        {
           cout<<"The character is a vowel \n"<<endl;
        }
        else
        {
            cout<<"The character is a consonant \n"<<endl;
        }

        cout<<"To continue Press x or X"<<endl;
        cin>>check;
        
    } while (check=='x' || check=='X');
    return 0;
}