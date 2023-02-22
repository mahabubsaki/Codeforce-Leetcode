#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    int progress = 0;
    int result = 0;
    for (int i = 0; i < inp; i++)
    {
        int x;
        cin >> x;
        if (x == -1 && progress == 0)
        {
            result++;
        }
        else if (x == -1)
        {
            progress--;
        }
        else
        {
            progress += x;
        }
    }
    cout << result;

    return 0;
}