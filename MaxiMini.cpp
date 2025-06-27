#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "array length:";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int maxi = array[0];
    int mini = array[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (maxi < array[i + 1])
        {
            maxi = array[i + 1];
        }
        else
        {
            mini = array[i + 1];
        }
    }
    cout << "Maximum: " << maxi << ", Minimum value: " << mini;
}