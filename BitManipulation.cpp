#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0); // if equal to zero then returns 1 and viceversa
}

int setBit(int n, int pos)
{
    return n | (1 << pos);
}

int clearBit(int n, int pos)
{
    return n & (~(1 << pos));
}

int upgradeBit(int n, int pos, int value)
{
    // n=n & (~(1<<pos));
    return (n & (~(1 << pos)) | (value << pos));
}

int main()
{
    int n, pos;
    cin >> n >> pos;

    cout << "getBit" << endl;
    cout << getBit(n, pos) << endl;

    cout << "setBit" << endl;
    cout << setBit(n, pos) << endl;

    cout << "clearBit" << endl;
    cout << clearBit(n, pos) << endl;

    int value;
    cin >> value;
    cout << "upgradeBit" << endl;
    cout << upgradeBit(n, pos, value);

    return 0;
}