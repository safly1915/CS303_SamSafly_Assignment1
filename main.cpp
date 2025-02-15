#include <iostream>
#include <fstream>
#include "functions.h"

using namespace std;

int main() {
    ifstream inputFile("/Users/samsafly/Desktop/Semester 2 - Soph/CS 303/CS303_SamSafly_Assignment1/A1input.txt"); //open input file
    if (!inputFile) { //if file can't be opened, output error message
        cerr << "Unable to open file";
        return 1; //exit the program
    }

    int array[100]; //declare array of available size 100
    int size = 0; //initialize size to 0

    while (inputFile >> array[size] && size < 100) { //read numbers from file into array while size less than 100, index 0 to 99
        size++; //increment size to keep track of number of elements
    }
    inputFile.close(); //close file

    cout << "Array elements: "; //print array elements
    for (int j = 0; j < size; j++) {
        cout << array[j] << " ";
    }
    cout << endl << endl;

    //checking if a number is in the array, change numToCheck value to search for different numbers
    int numToCheck = 37;
    checktoPrint(array, size, numToCheck); //digit is entered into function and searched for in the array

    //change a number at a specific index, change indexChange for index and changeToNum for value; range will be checked and caught
    int indexChange = 3, changeToNum = 54;
    changeNum(array, size, indexChange, changeToNum); //index and digit entered into change function

    //remove a value at specific index, change indexRemove to remove a different index
    int indexRemove = 4;
    removeNum(array, size, indexRemove); //index entered into function, size updated

    //add a number to the array, change newNum to add different value
    int newNum = 77;
    addNum(array, size, newNum); //new Num entered into addNum funtion, size updated

    //print the updated array
    cout << endl << "Updated Array: ";
    for (int j = 0; j < size; j++) {
        cout << array[j] << " ";
    }
    cout << endl;

    return 0;
}
