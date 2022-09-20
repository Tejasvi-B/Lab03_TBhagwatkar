// Lab03_TBhagwatkar.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Program execution begins and ends there 
// Written by Tejasvi Bhagwatkar 9/6/2022

#include <iostream>
using namespace std;

//extablishing a selection menu
void printMenu(int& choice) {
    cout << "Welcome to my program, please select an operation to perform:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "\nYour Selection: ";
    cin >> choice;
}

//input values from the user 
//assigning the variables a float value
void getChoices(float& A, float& B) {
    cout << "Please enter the first value:";
    cin >> A;

    cout << "Please enter the second value:";
    cin >> B; 
    // The rest of this function is an exercise to the reader
}

//implementing the different mathematical expressions from the 4 choices 
// Outputting the value in an equation format 
//Addition 
void firstChoice(float A, float B) {
    cout << A << " + " << B << " = ";
    cout << (A + B) << endl;
}
//Subtraction
void secondChoice(float A, float B) {
    cout << A << " - " << B << " = ";
    cout << (A - B) << endl;
}
//Multiplication
void thirdChoice(float A, float B) {
    cout << A << " * " << B << " = ";
    cout << (A * B) << endl;
}
//Division
void fourthChoice(float A, float B) {
    cout << A << " / " << B << " = ";
    cout << (A / B) << endl;
}

//Main function
int main() {
    int choice;
    float A;
    float B;
    printMenu(choice);
    getChoices(A, B);
    if (choice == 1) {
        firstChoice(A, B);
         
    }
    if (choice == 2) {
        secondChoice(A, B);
        
    }
    if (choice == 3) {
        thirdChoice(A, B);
        
    }
    if (choice == 4) {
        fourthChoice(A, B);
        
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
