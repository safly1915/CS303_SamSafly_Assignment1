#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "functions.h"
using namespace std;


int main() {
    ifstream inputFile("A1input.txt");
    if (!inputFile) {
        cerr << "Unable to open file";
        return 1;
    }

    int array[100];
    int i = 0;

    while (inputFile >> array[i]) {
        i++;
    }

    inputFile.close();

    for (int j = 0; j < i; j++) {
        cout << array[j] << " ";
    }
    cout << endl << endl;

    int numToCheck = 34;
    checktoPrint(array, i, numToCheck);

    return 0;
}