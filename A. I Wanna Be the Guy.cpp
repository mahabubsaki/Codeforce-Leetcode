#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lvl;
    cin >> lvl;

    int arr[lvl];
    for (int i = 0; i < lvl; i++)
    {
        arr[i] = 0;
    };
    int p1;
    cin >> p1;
    for (int i = 0; i < p1; i++)
    {
        int x;
        cin >> x;
        arr[x - 1] = x;
    }
    int p2;
    cin >> p2;
    for (int i = 0; i < p2; i++)
    {
        int x;
        cin >> x;
        arr[x - 1] = x;
    }
    bool flag = true;
    for (int i = 0; i < lvl; i++)
    {
        if (arr[i] == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}