#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = 1;
    }
    for (int j = 0; j < n; j++)
    {
        cout << array[j] << endl;
    }
}