// task 01
#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {2, 4, 6, 8, 10};
    int i;
    numbers[2] = 7;

    for (i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
}
// output prediction: "2 4 7 8 10"







