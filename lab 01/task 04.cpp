
//   task 04 
#include <iostream>
using namespace std;

int main()
{
    int arr[8];
    cout << "Enter 8 integers: ";
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    int maxValue = arr[0], minValue = arr[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < 8; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minValue)
        {
            minValue = arr[i];
            minIndex = i;
        }
    }

    cout << "Largest: " << maxValue << " at index " << maxIndex << endl;
    cout << "Smallest: " << minValue << " at index " << minIndex << endl;

    return 0;
}