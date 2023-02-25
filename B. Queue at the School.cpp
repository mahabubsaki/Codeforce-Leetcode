#include <bits/stdc++.h>
using namespace std;
int main()
{
    string serial;
    int count, loop;
    cin >> count >> loop;
    cin >> serial;
    for (int i = 0; i < loop; i++)
    {
        for (int j = 0; j < serial.size() - 1; j++)
        {
            if (serial[j] == 'B' && serial[j + 1] == 'G')
            {
                swap(serial[j], serial[j + 1]);
                j++;
            }
        }
    }
    cout << serial;
    return 0;
}