//      task 02
#include<iostream>
using namespace std;

int main(){
    int numbers[5];
    int total = 0;

    for (int i = 0; i < 5;i++){
        cout << "enter number at position " << i <<": ";
        cin >> numbers[i];
    }

    for (int j = 0; j < 5;j++){
        total += numbers[j];
    }

    cout <<"total = "<< total;
}