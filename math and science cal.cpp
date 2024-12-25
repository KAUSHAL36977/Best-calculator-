#include <iostream>
#include <cmath>   // For scientific functions like sqrt, power, trigonometry
#include <cstdlib> // For exit function

using namespace std;

void displayMenu() {
    cout << "Scientific and Mathematical Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Square Root" << endl;
    cout << "6. Power" << endl;
    cout << "7. Sine" << endl;
    cout << "8. Cosine" << endl;
    cout << "9. Tangent" << endl;
    cout << "10. Exit" << endl;
}

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Addition
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2: // Subtraction
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3: // Multiplication
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4: // Division
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            case 5: // Square Root
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 >= 0) {
                    result = sqrt(num1);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Cannot calculate square root of a negative number!" << endl;
                }
                break;
            case 6: // Power
                cout << "Enter the base and exponent: ";
                cin >> num1 >> num2;
                result = pow(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 7: // Sine
                cout << "Enter an angle (in degrees): ";
                cin >> num1;
                result = sin(num1 * M_PI / 180); // Convert degrees to radians
                cout << "Result: " << result << endl;
                break;
            case 8: // Cosine
                cout << "Enter an angle (in degrees): ";
                cin >> num1;
                result = cos(num1 * M_PI / 180); // Convert degrees to radians
                cout << "Result: " << result << endl;
                break;
            case 9: // Tangent
                cout << "Enter an angle (in degrees): ";
                cin >> num1;
                result = tan(num1 * M_PI / 180); // Convert degrees to radians
                cout << "Result: " << result << endl;
                break;
            case 10: // Exit
                cout << "Exiting the program." << endl;
                exit(0);
            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }
    }
    return 0;
}
