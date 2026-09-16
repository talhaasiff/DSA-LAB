#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    // 2. Validate inputs (1 to 10)
    cout << "Enter number of students (1-10): ";
    cin >> rows;
    cout << "Enter number of subjects (1-10): ";
    cin >> cols;

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        cout << "Error: Rows and columns must be between 1 and 10." << endl;
        return 0;
    }

    // Allocate the dynamic matrix using a double pointer
    int **marks = new int *[rows];
    for (int r = 0; r < rows; r++)
    {
        marks[r] = new int[cols];
    }

    // 3. Read marks using pointer notation
    for (int r = 0; r < rows; r++)
    {
        cout << "Enter " << cols << " marks for Student " << r + 1 << ": ";
        for (int c = 0; c < cols; c++)
        {
            cin >> *(*(marks + r) + c);
        }
    }

    // Display the matrix
    cout << "\nMarks Matrix:" << endl;
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cout << *(*(marks + r) + c) << " ";
        }
        cout << endl;
    }

    // 4. Calculate totals and find the top student
    int bestTotal = 0;
    int topStudent = 1;

    for (int r = 0; r < rows; r++)
    {
        int currentTotal = 0;
        for (int c = 0; c < cols; c++)
        {
            currentTotal += *(*(marks + r) + c);
        }

        cout << "Student " << r + 1 << " Total: " << currentTotal << endl;

        // Initialize bestTotal with the first student, or update if a strictly higher total is found
        if (r == 0 || currentTotal > bestTotal)
        {
            bestTotal = currentTotal;
            topStudent = r + 1;
        }
    }

    cout << "\nTop Student: " << topStudent << " with a total of " << bestTotal << endl;

    // 5. Cleanup: Delete each row first, then the array of pointers
    for (int r = 0; r < rows; r++)
    {
        delete[] marks[r];
    }
    delete[] marks;
    marks = nullptr;

    return 0;
}