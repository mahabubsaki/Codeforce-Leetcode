#include <iostream>
using namespace std;
#include <vector>
vector<int> merge_sort(vector<int> a)
{
    if (a.size() <= 1)
    {
        return a;
    }
    int middle = a.size() / 2;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < middle; i++)
    {
        b.push_back(a[i]);
    }
    for (int i = middle; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }
    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);

    vector<int> sorted_a;
    int idx1 = 0;
    int idx2 = 0;
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        if (idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if (idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if (sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    };
    return sorted_a;
};
int main()
{
    string input;
    cin >> input;
    vector<int> arr;
    for (int i = 0; i < input.size(); i += 2)
    {
        arr.push_back(input[i] - '0');
    }
    vector<int> sorted = merge_sort(arr);
    input = "";
    for (int i = 0; i < sorted.size(); i++)
    {
        input += sorted[i] + '0';
        if (i + 1 != sorted.size())
        {
            input += '+';
        }
    }
    cout << input;

    return 0;
}