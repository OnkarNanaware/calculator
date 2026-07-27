#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class ScientificCalculator {
private:
    double result;

public:
    ScientificCalculator() : result(0) {}

    double add(double a, double b) {
        result = a + b;
        return result;
    }

    double subtract(double a, double b) {
        result = a - b;
        return result;
    }

    double multiply(double a, double b) {
        result = a * b;
        return result;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        result = a / b;
        return result;
    }

    double modulus(double a, double b) {
        if (b == 0) {
            cout << "Error: Modulus by zero!" << endl;
            return 0;
        }
        result = fmod(a, b);
        return result;
    }

    double square(double a) {
        result = a * a;
        return result;
    }

    double squareRoot(double a) {
        if (a < 0) {
            cout << "Error: Negative number!" << endl;
            return 0;
        }
        result = sqrt(a);
        return result;
    }

    double power(double base, double exp) {
        result = pow(base, exp);
        return result;
    }

    double sine(double angle) {
        result = sin(angle);
        return result;
    }

    double cosine(double angle) {
        result = cos(angle);
        return result;
    }

    double tangent(double angle) {
        result = tan(angle);
        return result;
    }

    double logarithm(double a) {
        if (a <= 0) {
            cout << "Error: Logarithm undefined for non-positive numbers!" << endl;
            return 0;
        }
        result = log10(a);
        return result;
    }

    double naturalLog(double a) {
        if (a <= 0) {
            cout << "Error: Natural logarithm undefined for non-positive numbers!" << endl;
            return 0;
        }
        result = log(a);
        return result;
    }

    double factorial(double a) {
        if (a < 0 || a != floor(a)) {
            cout << "Error: Factorial of non-positive or non-integer numbers!" << endl;
            return 0;
        }
        double fact = 1;
        for (int i = 2; i <= (int)a; i++) {
            fact *= i;
        }
        result = fact;
        return result;
    }

    double getResult() {
        return result;
    }
};

void displayMenu() {
    cout << "\n======== Scientific Calculator ========" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Modulus (%)" << endl;
    cout << "6. Square (x^2)" << endl;
    cout << "7. Square Root" << endl;
    cout << "8. Power (x^y)" << endl;
    cout << "9. Sine" << endl;
    cout << "10. Cosine" << endl;
    cout << "11. Tangent" << endl;
    cout << "12. Logarithm (base 10)" << endl;
    cout << "13. Natural Logarithm" << endl;
    cout << "14. Factorial" << endl;
    cout << "15. Exit" << endl;
    cout << "======================================" << endl;
}

int main() {
    ScientificCalculator calc;
    int choice;
    double num1, num2;

    cout << fixed << setprecision(6);

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 15) {
            cout << "Thank you for using Scientific Calculator!" << endl;
            break;
        }

        if (choice >= 1 && choice <= 8) {
            cout << "Enter first number: ";
            cin >> num1;
            if (choice >= 1 && choice <= 5) {
                cout << "Enter second number: ";
                cin >> num2;
            }

            switch (choice) {
                case 1:
                    cout << "Result: " << calc.add(num1, num2) << endl;
                    break;
                case 2:
                    cout << "Result: " << calc.subtract(num1, num2) << endl;
                    break;
                case 3:
                    cout << "Result: " << calc.multiply(num1, num2) << endl;
                    break;
                case 4:
                    cout << "Result: " << calc.divide(num1, num2) << endl;
                    break;
                case 5:
                    cout << "Result: " << calc.modulus(num1, num2) << endl;
                    break;
                case 6:
                    cout << "Result: " << calc.square(num1) << endl;
                    break;
                case 7:
                    cout << "Result: " << calc.squareRoot(num1) << endl;
                    break;
                case 8:
                    cout << "Enter exponent: ";
                    cin >> num2;
                    cout << "Result: " << calc.power(num1, num2) << endl;
                    break;
            }
        } else if (choice >= 9 && choice <= 11) {
            cout << "Enter angle in radians: ";
            cin >> num1;

            switch (choice) {
                case 9:
                    cout << "Result: " << calc.sine(num1) << endl;
                    break;
                case 10:
                    cout << "Result: " << calc.cosine(num1) << endl;
                    break;
                case 11:
                    cout << "Result: " << calc.tangent(num1) << endl;
                    break;
            }
        } else if (choice >= 12 && choice <= 14) {
            cout << "Enter number: ";
            cin >> num1;

            switch (choice) {
                case 12:
                    cout << "Result: " << calc.logarithm(num1) << endl;
                    break;
                case 13:
                    cout << "Result: " << calc.naturalLog(num1) << endl;
                    break;
                case 14:
                    cout << "Result: " << calc.factorial(num1) << endl;
                    break;
            }
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
