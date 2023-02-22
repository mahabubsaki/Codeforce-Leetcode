#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            arr[str[i] - 97] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {

        if (arr[i] == 1)
            count++;
    }
    cout << count;
    return 0;
}