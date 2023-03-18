#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;    //1 2 3
    
    vector<int> :: iterator it;
    for(it = v.begin(); it<v.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;    //1 2 3
    
    for(auto element: v)
    {
        cout<<element<<" ";
    }cout<<endl;    //1 2 3
    
    v.pop_back();   //1 2

    vector <int> v2(3, 50);     //50 50 50

    swap(v, v2);    
    for(auto value : v)
    {
        cout<<value<<" ";
    }cout<<endl;

    for(auto noicee : v2)
    {
        cout<<noicee<<" ";
    }cout<<endl;
    

    //pairs
    pair <int, char> pair;
    pair.first = 8;
    pair.first = 'g';

    //2D Vector
    // vector<vector<int>> dimen;

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int  j = 0; j < 4; j++)
    //     {
    //         cin>>dimen[i][j];   //can't input mulidimensnal array
    //         //Segementation falt
    //     }
        
    // }
    
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int  j = 0; j < 4; j++)
    //     {
    //         cout<<dimen[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //input test of vector
    vector<int> arr;
    // for(int i=0; i<4; i++)
    // {
    //     cin>>arr[i];    //no u can't
    // }

    //to take input vector
    for(int i=0; i<4; i++)
    {
        int temp;
        cin>>temp;

        arr.push_back(temp);
    }

    for(auto pagal: arr)
    {
        cout<<pagal<<" ";
    }cout<<endl;
    
    return 0;
}