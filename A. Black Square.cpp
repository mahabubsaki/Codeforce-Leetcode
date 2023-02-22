#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int arr[4] = {a, b, c, d};
    string str;
    cin >> str;
    int total = 0;
    for (int i = 0; i < str.size(); i++)
    {
        int current = str[i] - '0';
        if (current == 1)
        {
            total += arr[0];
        }
        else if (current == 2)
        {
            total += arr[1];
        }
        else if (current == 3)
        {
            total += arr[2];
        }
        else
        {
            total += arr[3];
        }
    }
    cout << total;
    return 0;
}