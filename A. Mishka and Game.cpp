#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    int misha = 0, chris = 0;
    for (int i = 0; i < inp; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            misha++;
        }
        else if (x < y)
        {
            chris++;
        }
    }
    if (misha > chris)
    {
        cout << "Mishka";
    }
    else if (chris > misha)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }

    return 0;
}