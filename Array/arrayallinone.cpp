//1D and 2D arrays 
#include<iostream>
 
using namespace std;

int main()
{
    //1.defining an one dimensional array
    int array1D[5]={1,2,3,4,5};//defining an array

    for(int i=0; i<=4; i++)
    {
        cout<<"element of index No."<<i<<"\tis\t"<<array1D[i]<<endl;
    }

    //2. defining an two dimensional array
    int array2D[2][2];//defining an array

    for(int j=0; j<2; j++)
    {
        for(int k=0; k<2; k++)
        {
            cout<<"enter element "<<endl;
            cin>>array2D[j][k];
        }
        
    }

    //3. MULTIPLICATION of elements in an array
    int array3D[2][4]={ {56,262,65,4} , {564,4,183,84} };
    int sum=0;
    for(int l=0; l<2; l++)
    {
        for(int m=0; m<2; m++)
        {
            sum+=array3D[l][m];
        }
        
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}
