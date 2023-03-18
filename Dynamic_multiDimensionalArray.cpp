#include<iostream> 
using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;

    //Allocte
    int **matrix = new int *[row];

    for(int i=0; i< row; i++)
    {
        matrix[i] = new int [col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"Ans. "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    
    //Deallocate
    for (int i = 0; i < row; i++)
    {
        delete [] matrix[i];    //Delallocate matrix
    }
    
    delete [] matrix;
    matrix = NULL;

    system("pause > 0");
    return 0;
}