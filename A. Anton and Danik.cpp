#include <bits/stdc++.h>
using namespace std;
int main()
{
    int in;
    string str;
    cin >> in;
    cin >> str;
    int dC = 0;
    int aC = 0;
    for (int i = 0; i < in; i++)
    {
        if (str[i] == 'A')
        {
            aC++;
        }
        else
        {
            dC++;
        }
    }

    if (dC == aC)
    {
        cout << "Friendship";
    }
    else if (dC < aC)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Danik";
    }

    return 0;
}