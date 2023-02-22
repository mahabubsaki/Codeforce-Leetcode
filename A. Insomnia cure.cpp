#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    int arr[e];
    for (int i = 0; i < e; i++)
    {
        arr[i] = 0;
    }
    int i = 1;
    int x = a * i;
    while (x < e)
    {
        x = a * i;
        arr[x - 1] = 1;
        i++;
    }
    i = 1;
    x = b * i;
    while (x < e)
    {
        x = b * i;
        arr[x - 1] = 1;
        i++;
    }
    i = 1;
    x = c * i;
    while (x < e)
    {
        x = c * i;
        arr[x - 1] = 1;
        i++;
    }
    i = 1;
    x = d * i;
    while (x < e)
    {
        x = d * i;
        arr[x - 1] = 1;
        i++;
    }
    int count = 0;
    for (int i = 0; i < e; i++)
    {
        if (arr[i] == 1)
            count++;
    }
    if (e < a || e < b || e < c || e < d)
    {
        cout << 0;
    }
    else if (e > 1)
    {
        cout << count;
    }
    else
    {
        cout << 1;
    }

    return 0;
}