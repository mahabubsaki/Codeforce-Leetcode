#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int *array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int largest = array[0], smallest = array[size - 1], lgIndex = 0, smIndex = size - 1;
    for (int i = size - 1; i >= 0; i--)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
            smIndex = i;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
            lgIndex = i;
        }
    }
    int move = (size - 1 - smIndex) + lgIndex;
    if (lgIndex > smIndex)
    {
        move--;
    }
    cout << move;
    delete[] array;
    return 0;
}