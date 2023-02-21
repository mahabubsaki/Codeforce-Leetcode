#include <bits/stdc++.h>
using namespace std;
int main()
{
    int frnds;
    cin >> frnds;
    int arr[frnds];
    for (int i = 1; i <= frnds; i++)
    {
        int x;
        cin >> x;
        arr[x - 1] = i;
    }
    for (int i = 0; i < frnds; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}