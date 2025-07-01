#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Size of Array: " << endl;
    cin >> n;
    int array[n];
    cout << "Array Elements Value: " << endl;
    for (int i = 0; i < n; i++)
    // outer loop(n-1 times)
    {
        cin >> array[i];
    }
    // inner loop for comparsion of every element with adjacent (n-i comparsion)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}