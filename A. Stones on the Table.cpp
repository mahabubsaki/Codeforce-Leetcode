#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    string str;
    cin >> size;
    cin >> str;
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (str[i] == str[i + 1])
            count++;
    }
    cout << count;

    return 0;
}