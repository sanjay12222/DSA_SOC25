#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            // cout << "index :" << i;
            return i;
        }
    }
    return -1;
}

int main()
{
    int size;
    cin >> size;
    int array[size];
    int target;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << ",";
    // }

    cin >> target;
    int Find = linearSearch(array, size, target);

    if (Find == -1)
    {
        cout << "no element match";
    }

    else
    {
        cout << "Element found at Index:" << Find;
    }
    return 0;
}