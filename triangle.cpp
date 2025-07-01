#include <iostream>
using namespace std;

void rhombu1(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            cout << "-";
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (j = 0; j < n - 1 - i; j++)
        {
            cout << "-";
        }
        cout << endl;
    }
}

void rhombu2(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "-";
        }
        for (j = 0; j < 2 * (n - i - 1) + 1; j++)
        {
            cout << "*";
        }
        for (j = 0; j < i; j++)
        {
            cout << "-";
        }
        cout << endl;
    }
}
int main()
{
    int n; // length of rhomus
    cin >> n;
    rhombu1(n);
    rhombu2(n);
    return 0;
}

// int main()
// {
//     int n; // length of mirror right angled triangle
//     cin >> n;
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < (n - 1) - i; j++)
//         {
//             cout << "-";
//         }
//         for (j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n; // length of inverted equilateral triangle
//     cin >> n;
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < i; j++)
//         {
//             cout << "-";
//         }
//         for (j = 0; j < 2 * (n - 1 - i) + 1; j++)
//         {
//             cout << "*";
//         }
//         for (j = 0; j < i; j++)
//         {
//             cout << "-";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n; // length of equilateral triangle
//     cin >> n;
//     int i, j;
//    for (i = 0; i < n; i++)
// {
//     for (j = 0; j < n - 1 - i; j++)
//     {
//         cout << "-";
//     }
//     for (j = 0; j < 2 * i + 1; j++)
//     {
//         cout << "*";
//     }
//     for (j = 0; j < n - 1 - i; j++)
//     {
//         cout << "-";
//     }
//     cout << endl;
// }
// }

// int main()
// {
//     int n; // length of mirror inverted right angled triangle
//     cin >> n;
//     int i, j;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < i; j++)
//         {
//             cout << "-";
//         }
//         for (j = 0; j < n - i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int main()
// {

//     int i, j, n;
//     /* print this pattern
//     1
//     12
//     123
//     1234
//     */
//     cin >> n;

//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < i + 1; j++)
//         {
//             cout << j + 1;
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int i, j, n;
//     cin >> n;//print righted angled triangle with star(*)
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int i, j, n;
//     cin >> n; // inverted right angled triangle
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < n - i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }