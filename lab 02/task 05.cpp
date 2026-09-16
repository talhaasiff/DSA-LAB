#include <iostream>
using namespace std;

int main()
{

    /* 1. Allocate a second block of n + 1 integers. Copy the original n values into it using pointer notation.
     Read the new mark into the final position.*/
    int n;

    
    cout << "Enter the initial number of students (1-10): ";
    cin >> n;

    if (n < 1 || n > 10)
    {
        cout << "Error: Number of students must be between 1 and 10." << endl;
        return 0;
    }

    // Allocating initial block and reading marks
    int *marks = new int[n];
    cout << "Enter " << n << " marks: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(marks + i);
    }

    // appending the new marks
    int newMark;
    cout << "Enter the new mark to add: ";
    cin >> newMark;

    //  Allocating a second block of n + 1 integers
    int *tempMarks = new int[n + 1];

    // Copying original n values into the new block using pointer notation
    for (int i = 0; i < n; i++)
    {
        *(tempMarks + i) = *(marks + i);
    }

    // Reading the new mark into the final position
    *(tempMarks + n) = newMark;

    /* 2. Release the old block. Make the original pointer refer to the new block,
     update the stored size, and display all values.*/
    delete[] marks;

    // updating the pointer and size
    marks = tempMarks;   // Making the original pointer refer to the new block
    tempMarks = nullptr; 
    n++;                 // Updating the stored size to n + 1

    // Displaying all values
    cout << "\nUpdated marks array: ";
    for (int i = 0; i < n; i++)
    {
        cout << *(marks + i) << " ";
    }
    cout << endl;

    // 3. Release the final block exactly once
    delete[] marks;
    marks = nullptr;

    return 0;
}