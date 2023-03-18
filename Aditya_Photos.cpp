#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));

    cout << "Welcome to Photo Guess of Aditya\n";
    cout << "So the BOT has choosen " << (rand() % (152 - 1 + 1) + 1) << " "
         << (rand() % (152 - 1 + 1) + 1) << ","
         << (rand() % (152 - 1 + 1) + 1) << ",";
    return 0;
}