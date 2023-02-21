#include <iostream>
using namespace std;
int main()
{
    int i;
    cin >> i;
    if (i <= 2)
    {
        cout << "No";
    }
    else
    {
        if (i % 2 == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }

    return 0;
}