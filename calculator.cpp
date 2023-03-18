//calculator using do-while
#include<iostream>
 
using namespace std;
 
// main function -
// where the execution of program begins
int main()
{   char csk;
    cout<<"\n\n\n\t\tTHIS CALCULATOR IS MADE BY ABHISHEK UPADHYAY\n===============================================================================\n \n \n"; 
    char a;
    do
    {
        char op;
        double x;
        double y;
        
        
        cout<<"\nenter a single opreand operation\n";    
        cin>>x>>op>>y;

            switch(op)
            {
                case '+' :   cout<<"your result is:\t"<<x+y<<endl;
                break;
                
                case '-' :   cout<<"your result is:\t"<<x-y<<endl;
                break;
                    
                case '*' :   cout<<"your result is:\t"<<x*y<<endl;
                break;
 
                case '/' :   cout<<"your result is:\t"<<x/y<<endl;
                break;
                
                default :   cout<<"invalude inpute"<<endl;

            }
            cout<<"\nTo Continue Press x or X"<<endl;
            cin>>csk;

    }while(csk=='x' || csk=='X');
return 0;
}