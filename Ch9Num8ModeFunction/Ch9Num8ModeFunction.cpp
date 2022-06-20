/************************************************
** Author: Andrea Hayes
** Date: May 17,2020
** Purpose: Find mode
** Input: Array
** Processing: Function to find mode
** Output: Mode, if any
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
// Function Prototypes
int getMode(int[], int);
int getInput();
int main() {
    //Decalre Variables
    const int SIZE = 10;
    int mode, arr[SIZE];

    // Loop to get numbers
    for (int i = 0; i < SIZE; i++) {
        *(arr + i) = getInput();
    }

    //Call and display mode
    mode = getMode(arr, SIZE);
    cout << mode;

    return 0;
}
//Function to get numbers
int getInput()
{
    int number;
    do {
        cout << "Enter number: ";
        cin >> number;
        if (number < 0) {
            cout << "Enter a number greater than 0" << endl;
        }
    } while (number < 0);
    return number;
}
// Function to figure mode
int getMode(int arr[], int size) {
    int maxNum = -1, maxCount = 0;
    for (int i = 0; i < size; i++) {
        int currentCount = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                currentCount++;
            }
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxNum = arr[i];
        }
    }
    if (maxCount < 2) {
        return -1;
    }
    return maxNum;
}