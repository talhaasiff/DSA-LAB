#include <iostream>
using namespace std;

int main()
{

    /*1. Read and validate n, then allocate int* marks = new int[n];
     Read n marks from 0 to 100 using *(marks + i). You may assume the entered marks are in this range.*/
    int n;

    cout << "Enter number of students (1-15): ";
    cin >> n;

    if (n < 1 || n > 15)
    {
        cout << "Error: number of students must be between 1 and 15." << endl;
        return 0;
    }

    // allocating dynamic array
    int *marks = new int[n];

    cout << "Enter marks (between 0-100) of " << n << " students: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(marks + i);
    }

    /*2. Use pointer notation to display the marks, calculate their total and average,
    and count marks greater than or equal to 50. Display the average without losing its fractional part.*/
    int total = 0;
    int count = 0;

    cout << "\nMarks entered: ";
    for (int i = 0; i < n; i++)
    {
        cout << *(marks + i) << " ";
        total += *(marks + i);

        if (*(marks + i) >= 50)
        {
            count++;
        }
    }

    double avg = double(total) / n;

    cout << "\nTotal: " << total << endl;
    cout << "Count of marks (greater than or equal to 50): " << count << endl;
    cout << "Average: " << avg << endl;

    // 3. Release the array with delete[] and set marks to nullptr.
    delete[] marks;
    marks = nullptr;

    return 0;
}
