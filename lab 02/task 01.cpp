#include <iostream>
using namespace std;

int main()
{
    /* 1. Read five non-negative values through *(p + i). Use pointer notation again to display the values and calculate the total. 
    Keep p pointing to the first element.  */
    int sales[5];
    int *p = sales; // pointer variable, it holds the memory address of the first element in the array.
    int total = 0;

    cout << "Enter sales for 5 days: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> *(p + i);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << " ";
        total += *(p + i);
    }

    cout << endl << "initial total sales: " << total << endl;

    // 2. Add 2 to the third day’s value through the pointer. Display the updated values and updated total.
    *(p + 2) += 2;

    int updatedTotal = 0;
    cout << "updated sales values: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << " ";
        updatedTotal += *(p + i);
    }

    cout << endl << "Updated total sales: " << updatedTotal << endl;

    return 0;
}