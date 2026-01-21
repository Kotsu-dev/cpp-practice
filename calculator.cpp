#include <iostream>
#include <string>
using namespace std;

int main() {
    double a, b;
    char op;
    string answer = "yes";

    while (answer != "no" && answer != "No") {
        cout << "Enter one of the four operations (+, -, *, /): ";
        cin >> op;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        if (!cin) {
            cout << "Error: Invalid number input.\n";
            break;
        }

        cout << "Result: ";

        if (op == '+') {
            cout << a + b;
        }
        else if (op == '-') {
            cout << a - b;
        }
        else if (op == '*') {
            cout << a * b;
        }
        else if (op == '/') {
            if (b == 0) {
                cout << "Error: Division by zero is not allowed.";
            } else {
                cout << a / b;
            }
        }
        else {
            cout << "Error: Unknown operator.";
        }

        cout << "\nDo you want to do another operation? (yes/no): ";
        cin >> answer;
        cout << "\n";
    }

    return 0;
}
