#include <iostream>
using namespace std;

// Function prototypes for basic operations
void addition();
void subtraction();
void multiplication();
void division();

int main() {
    int choice;
    bool run = true;
    
    while (run) {
        // Display menu
        cout << "----- Basic Calculator -----\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Choose an operation (1-5): ";
        cin >> choice;
        
        // Perform operation based on user choice
        switch(choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                run = false;
                cout << "Exiting the calculator.\n";
                break;
            default:
                cout << "Invalid choice! Please choose a valid option.\n";
        }
        
        cout << "\n"; // Add some space before repeating the menu
    }
    
    return 0;
}

// Function to perform addition
void addition() {
    double num1, num2, result;
    cout << "Enter two numbers for addition: ";
    cin >> num1 >> num2;
    result = num1 + num2;
    cout << "Result: " << num1 << " + " << num2 << " = " << result << "\n";
}

// Function to perform subtraction
void subtraction() {
    double num1, num2, result;
    cout << "Enter two numbers for subtraction: ";
    cin >> num1 >> num2;
    result = num1 - num2;
    cout << "Result: " << num1 << " - " << num2 << " = " << result << "\n";
}

// Function to perform multiplication
void multiplication() {
    double num1, num2, result;
    cout << "Enter two numbers for multiplication: ";
    cin >> num1 >> num2;
    result = num1 * num2;
    cout << "Result: " << num1 << " * " << num2 << " = " << result << "\n";
}

// Function to perform division
void division() {
    double num1, num2, result;
    cout << "Enter two numbers for division: ";
    cin >> num1 >> num2;
    
    if (num2 != 0) {
        result = num1 / num2;
        cout << "Result: " << num1 << " / " << num2 << " = " << result << "\n";
    } else {
        cout << "Error! Division by zero is not allowed.\n";
    }
}
