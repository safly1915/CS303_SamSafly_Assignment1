#include "functions.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int intCheck(const int array[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (array[i] == num) {
            return i; // Number found
        }
    }
    return -1; // Number not found
}

void checktoPrint(const int array[], int size, int num) {
    if (intCheck(array, size, num) != -1) { //if integer is found
        cout << "The number " << num << " is in the array." << endl; //print success message
    } else {
        cout << "The number " << num << " is not in the array." << endl; //print failure message if number not in array
    }
}

void changeNum(int array[], int size, int index, int numChange) {
    try { //try to change number
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of bounds."); //if index out of range, throw error
        }
        int oldValue = array[index]; //old value is number at index
        array[index] = numChange; //change old value to the new value numChange
        cout << "Old value: " << oldValue << ", New value: " << numChange << endl; //varification with message
    } catch (const exception &e) { //catch any errors/exceptions
        cerr << "Error: " << e.what() << endl; //print error message
    }
}

void addNum(int array[], int &size, int num) {
    try { //try to add number
        if (size >= 100) { //if array is full, throw error and print error message
            throw overflow_error("Array is full, cannot add new number.");
        }
        array[size] = num; //adds number to the end of the array
        size++; //increment size
        cout << "Added number: " << num << endl; //varification with message
    } catch (const exception &e) { //catch any errors and print error message
        cerr << "Error: " << e.what() << endl;
    }
}

void removeNum(int array[], int &size, int index) {
    if (index < 0 || index >= size) { //if index out of range, print error message
        cerr << "Error: Index out of bounds, cannot remove." << endl;
        return; //end function
    }
    for (int i = index; i < size - 1; i++) { //for each element starting at specific index
        array[i] = array[i + 1]; //shift the elements to the left
    }
    size--; //decrement the size to get rid of empty space
    cout << "Number at index " << index << " removed." << endl; //confirmation of removal at specific index
}