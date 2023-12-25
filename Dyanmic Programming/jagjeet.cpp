#include <iostream>
#include <string>
using namespace std;

string gameWinner(string colors)
{
    int wCount = 0, bCount = 0;
    bool wMovePossible = false, bMovePossible = false;
    int i = 0;
    while (i < colors.size())
    {
        // count adjacent white and black pieces
        int j = i + 1;
        while (j < colors.size() && colors[j] == colors[i])
        {
            j++;
        }
        int count = j - i;
        if (colors[i] == 'w')
        {
            wCount += count;
            if (count >= 3)
            {
                wMovePossible = true;
            }
        }
        else
        {
            bCount += count;
            if (count >= 3)
            {
                bMovePossible = true;
            }
        }
        i = j;
    }
    if (!wMovePossible)
    {
        return "bob";
    }
    else if (!bMovePossible)
    {
        return "wendy";
    }
    else
    {
        return (wCount > bCount) ? "wendy" : "bob";
    }
}

int main()
{
    // string colors;
    // cin >> colors;
    cout << gameWinner("wwwbb") << endl;
    return 0;
}