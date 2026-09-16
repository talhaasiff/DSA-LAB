#include <iostream>
using namespace std;

int main(){
    int array[10];
    for (int i = 0; i < 10;i++){
        cout << "Enter a number: ";
        cin >> array[i];
    }

    cout << "Actual Array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    int uniqueCount = 0;    // tracks total number of unique elements found, also acts as the index where the next unique element should be stored

    for (int i = 0; i < 10; i++)    // loop through every element in the array
    {
        bool isDuplicate = false;   // assuming current number is unique until found a match
        for (int j = 0; j < uniqueCount; j++)   // compare against the unique numbers moved to front
        {
            if (array[i] == array[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            array[uniqueCount] = array[i];
            uniqueCount++;
        }
    }

    cout << endl << "Unique values: ";
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl << "Count: " << uniqueCount << endl;

    return 0;
}