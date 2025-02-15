#include "functions.h"
#include <iostream>
using namespace std;

int intCheck(const int array[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (array[i] == num) {
            return i; // Number found
        }
    }
    return -1;// Number not found
}
void checktoPrint(const int array[], int size, int num) {
    if (intCheck(array, size, num) != -1) {
        cout << "The number " << num << " is in the array." << endl;
    } else {
        cout << "The number " << num << " is not in the array." << endl;
    }
}