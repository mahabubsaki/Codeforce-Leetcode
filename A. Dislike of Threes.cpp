
#include <iostream>
using namespace std;
#include <string>
int main()
{
    // Write C++ code her
    int inp;
    cin >> inp;
    for (int x = 0; x < inp; x++)
    {
        int range, seq = 0;
        cin >> range;
        int i = 1;
        while (i <= range)
        {

            while (seq % 3 == 0 || to_string(seq)[to_string(seq).size() - 1] - '0' == 3)
            {
                seq++;
            }
            seq++;
            i++;
        }

        cout << seq - 1 << endl;
    }
    return 0;
}