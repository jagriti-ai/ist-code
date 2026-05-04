#include <iostream>   // For input and output
using namespace std;

int main() {

    // Declare variables to store numbers and operator
    double num1, num2;
    char op;

    // Display heading
    cout << "===== Simple C++ Calculator =====" << endl;

    // Take first number input
    cout << "Enter first number: ";
    cin >> num1;

    // Take operator input (+, -, *, /)
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Take second number input
    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation based on operator
    if (op == '+') {
        cout << "Result: " << num1 + num2 << endl;   // Addition
    }
    else if (op == '-') {
        cout << "Result: " << num1 - num2 << endl;   // Subtraction
    }
    else if (op == '*') {
        cout << "Result: " << num1 * num2 << endl;   // Multiplication
    }
    else if (op == '/') {
        // Check division by zero
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;   // Division
        } else {
            cout << "Error: Cannot divide by zero!" << endl;
        }
    }
    else {
        // Invalid operator case
        cout << "Invalid operator!" << endl;
    }

    return 0;   // End of program
}