#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int *values = new int[n]; // Allocating dynamic array

    cout << "Enter 3 integers: ";
    // Fix 1: Changed loop condition to i < n
    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
    }

    cout << "Values entered: ";
    // Displaying all three integers 
    for (int i = 0; i < n; i++)
    {
        cout << values[i] << " ";
    }
    cout << endl;

    // Fix 2: Using delete[] for an array
    delete[] values;

    // Fix 3: Reset pointer to prevent dangling access
    values = nullptr;

    // cout << values[0]; // removed: cannot be accessed after deletion

    return 0;
}