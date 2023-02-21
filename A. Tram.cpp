#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total;
    cin >> total;
    int size = 0;
    int temp = 0;
    for (int i = 0; i < total; i++)
    {
        int eject, arrive;
        cin >> eject;
        cin >> arrive;
        temp += arrive;
        temp -= eject;
        if (temp > size)
        {
            size = temp;
        }
    }

    cout << size;

    return 0;
}