#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    string result = "";
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
        {
            result += '0';
        }
        else
        {
            result += '1';
        }
    }
    cout << result;

    return 0;
}