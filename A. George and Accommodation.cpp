#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int available = 0;
    for (int i = 0; i < x; i++)
    {
        int people, capacity;
        cin >> people;
        cin >> capacity;
        if (people + 2 <= capacity)
        {
            available++;
        }
    }
    cout << available;
    return 0;
}