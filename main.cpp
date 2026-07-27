#include <iostream>
#include <limits>

int main() {
    double a, b;
    char op;

    std::cout << "Enter expression (e.g. 3 + 4): ";
    if (!(std::cin >> a >> op >> b)) {
        return 0;
    }

    double result;
    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                std::cout << "Error: division by zero\n";
                return 0;
            }
            result = a / b;
            break;
        default:
            std::cout << "Unknown operator\n";
            return 0;
    }

    std::cout << a << " " << op << " " << b << " = " << result << "\n";
    return 0;
}
