#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    bool right = true;
    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < str1.size(); i++)
    {
        arr[str1[i] - 65] += 1;
    }
    for (int i = 0; i < str2.size(); i++)
    {
        arr[str2[i] - 65] += 1;
    }
    for (int i = 0; i < str3.size(); i++)
    {
        arr[str3[i] - 65] -= 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            right = false;
            break;
        }
    }
    if (right)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}