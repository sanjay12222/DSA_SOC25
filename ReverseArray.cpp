#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Size of Array: " << endl;
    cin >> size;
    int array[size];
    cout << "Array Elements Value: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int temp[size];

    for (int i = 0; i < size; i++)
    {
        temp[i] = array[size - 1 - i];
    }
    // array[size-1] = temp[size-1]; change one element only
    cout << "Array Elements Value are Reversed: " << endl;

    for (int i = 0; i < size; i++)
    {
        array[i] = temp[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}