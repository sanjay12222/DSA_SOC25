#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if (age > 18)
    {
        cout << "Eligible for job";
        if (age >= 55 && age <= 57)
        {
            cout << ", but retirement soon" << "\n";
        }

        else if (age > 57)
        {
            cout << " but retirement time" << endl;
        }
    }
    else
    {
        cout << "not eligible for job" << endl;
    }
    return 0;
    //     int marks;
    //     cin >> marks;
    //     if (marks >= 80 && marks <= 100)
    //     {
    //         cout << "A" << endl;
    //     }
    //     else if (marks >= 60 && marks <= 79)
    //     {
    //         cout << "B" << endl;
    //     }
    //     else if (marks >= 50 && marks <= 59)
    //     {
    //         cout << "C" << endl;
    //     }
    //     else if (marks >= 45 && marks <= 49)
    //     {
    //         cout << "D" << endl;
    //     }
    //     else if (marks >= 25 && marks <= 44)
    //     {
    //         cout << "E" << endl;
    //     }
    //     else
    //     {
    //         cout << "F" << endl;
    //     }
}