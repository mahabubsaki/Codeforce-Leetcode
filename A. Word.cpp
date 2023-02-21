#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int upper = 0;
    int lower = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97)
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }

    if (upper > lower)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 97)
            {
                str[i] -= 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] < 97)
            {
                str[i] += 32;
            }
        }
    }
    cout << str;
    return 0;
}