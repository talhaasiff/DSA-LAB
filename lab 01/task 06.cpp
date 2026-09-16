//   task 06
#include <iostream>
using namespace std;

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> arr[i];

    }

    // reversing without using a second array
    for (int i = 0; i < 3; i++)
    {
        int temp = arr[i];
        arr[i] = arr[5 - i];
        arr[5 - i] = temp;
    }

    cout << "Reversed Array: " << endl;
    for (int i = 0; i < 6;i++){
        cout << arr[i] << " ";
    }
}