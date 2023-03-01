#include <bits/stdc++.h>
using namespace std;
int main()
{
    int problems, need;
    cin >> problems >> need;
    int current = 240 - need;
    int done = 0;
    int x = 1;
    for (int i = 0; i < problems; i++)
    {
        current -= (x * 5);
        if (current < 0)
        {
            break;
        }
        x++;
        done++;
    }

    cout << done;
    return 0;
}