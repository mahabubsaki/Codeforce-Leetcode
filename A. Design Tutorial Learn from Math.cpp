
#include <iostream>
using namespace std;
bool isC(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return true;
    }
    return false;
}

int main()
{

    int x;
    cin >> x;
    int left, right;
    left = x / 2;
    if (x % 2 == 0 && left * 2 == x && left % 2 == 0)
    {
        cout << left << " " << left;
    }
    else
    {

        while (!isC(left) || !isC(x - left))
        {
            left--;
        }
        cout << left << " " << x - left;
    }

    return 0;
}