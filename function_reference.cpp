#include <iostream>
using namespace std;

int ArrayPassByReference(int arr[], int n)
{
    arr[0] += 100;
    return arr[0];
}

int main()
{
    int n = 5;
    int arr[n];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int print_result = ArrayPassByReference(arr, n);
    cout << print_result << endl;
    cout << arr[n - 5];

    return 0;
}