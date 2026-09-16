#include <iostream>
using namespace std;

int main()
{
    // 1. Use nested loops and *(*(rowPtr + r) + c) to read and display the six non-negative values in a two-row table.
    int sales[2][3];
    int (*rowPtr)[3] = sales;

    for (int r = 0; r < 2; r++)
    {
        cout << "Enter 3 non-negative sales for Branch " << (r + 1) << ": ";
        for (int c = 0; c < 3; c++)
        {
            cin >> *(*(rowPtr + r) + c);
        }
    }

    cout << "\nSales Table:" << endl;
    for (int r = 0; r < 2; r++)
    {
        cout << "Branch " << (r + 1) << ": ";
        for (int c = 0; c < 3; c++)
        {
            cout << *(*(rowPtr + r) + c) << " ";
        }
        cout << endl;
    }

    // 2. Calculate and display the total for each branch and the total for each day. Use the same pointer notation when reading elements for the calculations.
    cout << "\nBranch totals: ";
    for (int r = 0; r < 2; r++)
    {
        int branchTotal = 0; // Reset total at the start of each branch
        for (int c = 0; c < 3; c++)
        {
            branchTotal += *(*(rowPtr + r) + c);
        }
        cout << branchTotal;
        if (r == 0)
            cout << " and ";
    }
    cout << endl;

    // Calculate day totals (outer loop is columns, inner is rows)
    cout << "Day totals: ";
    for (int c = 0; c < 3; c++)
    {
        int dayTotal = 0; // Resetting total at the start of each day
        for (int r = 0; r < 2; r++)
        {
            dayTotal += *(*(rowPtr + r) + c);
        }
        cout << dayTotal;
        if (c < 2)
            cout << (c == 0 ? ", " : " and ");
    }
    cout << endl;

    return 0;
}