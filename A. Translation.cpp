#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    bool rev = true;
    int i = 0, j = str2.length() - 1;
    while (i < str1.length())
    {
        if (str1[i] != str2[j])
        {
            rev = false;
            break;
        }
        i++;
        j--;
    }
    if (rev)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}