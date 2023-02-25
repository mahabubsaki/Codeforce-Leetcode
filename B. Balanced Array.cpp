#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    for (int j = 0; j < inp; j++)
    {
        int num;
        cin >> num;
        vector<int> arr;
        int evenStart = 2;
        int evenTotal = 0;
        for (int i = 0; i < num / 2; i++)
        {
            arr.push_back(evenStart);
            evenTotal += evenStart;
            evenStart += 2;
        }
        int oddStart = 1;
        int oddTotal = 0;
        for (int i = num / 2; i < num - 1; i++)
        {
            arr.push_back(oddStart);
            oddTotal += oddStart;
            oddStart += 2;
        }
        while (evenTotal > oddTotal)
        {
            int check = oddTotal + oddStart;
            if (check == evenTotal)
            {
                oddTotal += oddStart;
                arr.push_back(oddStart);
                break;
            }
            else if (check > evenTotal)
            {
                oddTotal += oddStart;
                break;
            }
            oddStart += 2;
        }
        if (oddTotal == evenTotal)
        {
            cout << "YES" << endl;
            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}