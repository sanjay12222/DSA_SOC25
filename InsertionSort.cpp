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

    // for (int i = 1; i < n; i++)

    // {
    //     int temp = array[i];
    //     int j = i - 1;
    //     for (; j >= 0; j--)
    //     {
    //         if (array[j] > temp)
    //         {
    //             array[j + 1] = array[j];
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     array[j + 1] = temp;
    // }
    int i = 1;
    int j = i - 1;
    while (i < n)
    {
        int temp = array[i];
        while (j >= 0)
        {
            if (array[j] > temp)
            {
                array[j + 1] = array[j];
            }
            else
            {
                break;
            }
            j--;
        }
        i++;
        array[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}