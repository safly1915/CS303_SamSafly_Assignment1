# CS303_SamSafly_Assignment1

Sam Safly
CS303 - Homework Assignment 1
12/14/2025

This is my project for Assignment 1! I am having some trouble with my VS Code compiler and I need to do some troubleshooting, but for now I need to build the program each time and enter "./program" into the terminal to run the program.

First, function declarations are in the "functions.h" header file, while the definitions are in the "functions.cpp" file.

I have done my best to outline the steps and reasons behind each command in main. Every time the program is run, it will display the original array read from the file, and then display each change. At the end it will show the new array.

Make sure when editing any of the desired values that will edit, press Command(Mac)/CTRL(Windows) + S to save the file.

To run (if in VS Code and "clang: error: linker command failed with exit code 1 (use -v to see invocation)" is showing), enter the command below or enter Command(Mac)/CTRL(Windows) + Shift + B into keyboard.

g++ -std=c++11 main.cpp functions.cpp -o program
(if using this, skip to ./program step and disregard next two steps)

Select, "build" not "clang." 
From there, put cursor into terminal and press a key to escape the build menu. 
Then enter "./program" into the terminal and observe the results.

I will talk to Professor Shah and see if we can figure out what's up with my VS Code. For now, it shouldn't be a problem to run it like this.

Thanks!