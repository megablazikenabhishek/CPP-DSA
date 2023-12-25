#include <bits/stdc++.h>
using namespace std;

string xor_operation(string &generator, string &message)
{
    string ans = generator;
    int pos = 0;
    string mod = "";
    while (pos + ans.length() <= message.length())
    {
        mod = "";
        // cout << "String: " << message.substr(pos, ans.length()) << endl;
        // cout << "dividend: " << ans << endl;
        for (int i = pos; i < pos + ans.length(); i++)
        {
            mod.push_back(ans[i - pos] == message[i] ? '0' : '1');
            message[i] = ans[i - pos] == message[i] ? '0' : '1';
        }
        // cout << "mod: " << mod << endl;
        // cout << "===========================" << endl;
        pos++;
        mod = mod.substr(1);
        if (mod[0] == '0')
            ans = string(generator.length(), '0');
        else
            ans = generator;
    }
    return mod;
}

int main()
{
    string s, generator;
    cout << "Enter the transmission message: ";
    cin >> s;

    cout << "Enter the generator message: ";
    cin >> generator;

    string message = s + string(generator.size() - 1, '0');

    cout << "message string with appended zero's is: " << message << endl;

    string modulo = xor_operation(generator, message);

    cout << "CRC is: " << modulo << endl;
    string to_be_transmitted = s + modulo;
    cout << "Message to be transmitted is: " << to_be_transmitted << endl;

    cout << "Enter the received string: ";
    string rec;
    cin >> rec;

    if (xor_operation(generator, rec) != string(generator.length() - 1, '0'))
        cout << "Galat hai.........." << endl;
    else
        cout << "Sahii hai.........." << endl;
}