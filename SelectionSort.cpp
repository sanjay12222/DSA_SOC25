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
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[minindex] > array[j])
            {
                minindex = j;
            }
        }
        swap(array[minindex], array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "\n";
    }
    return 0;
}