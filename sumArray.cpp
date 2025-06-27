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

    int sum = array[0];
    for (int k = 1; k < size; k++)
    {
        sum += array[k];
    }
    cout << "sum of array: " << sum;

    return 0;
}