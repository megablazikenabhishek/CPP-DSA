#include"iostream"

int main()
{
    int n;
    std::cin>>n; 

    char arr[n+1];
    std::cin>>arr;

    bool flag=0;
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            flag = 0;
            break;
        }

        else
        {
            flag=1;
        }
    }

    if (flag)
    {
        std::cout<<"It's a Panildrome";
    }

    else
        std::cout<<"Not a Panildrome";
    return 0;
}