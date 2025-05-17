#include <iostream>
#include <cmath>
#include <limits>

double square_root(float num1){
    double result = sqrt(num1);
    if (num1 < 0) {
        std::cout << "Invalid Input! Cannot calculate square root of negative numbers." << std::endl;
        return std::numeric_limits<double>::quiet_NaN();
    }
    return result;
}
double results(char op, float num1, float num2){
    double result;
    if (op == '+') {
        result = num1 + num2;
    }else if(op == '-'){
        result = num1 - num2;
    }else if (op == '*') {
        result = num1 * num2;
    }else if(op == '/'){
        result = num1 / num2;
    }else if (op == '^') {
        result = pow(num1, num2);
    }else if (op == '%') {
        result = fmod(num1, num2);
    }
    return result;
}

int main(){
    float num1, num2;
    char op;
    while (true) {
       std::cout << "Choose a process(*,/,+,-,s,^,%)or 'q' and 'Q' to exit: ";
       std::cin >> op;

       if (op == 'q' || op == 'Q') {
           std::cout << "Exiting the program..." << std::endl;
           break;
       }

       switch (op) {
           case '+':
           std::cout << "Enter first number: ";
           std::cin >> num1;
           std::cout << "Enter second number: ";
           std::cin >> num2;
           std::cout << "Result: " << results(op, num1, num2) << std::endl;
           break;
           case '-':
           std::cout << "Enter first number: ";
           std::cin >> num1;
           std::cout << "Enter second number: ";
           std::cin >> num2;
           std::cout << "Result: " << results(op, num1, num2) << std::endl;
           break;
           case '*':
           std::cout << "Enter first number: ";
           std::cin >> num1;
           std::cout << "Enter second number: ";
           std::cin >> num2;
           std::cout << "Result: " << results(op, num1, num2) << std::endl;
           break;
           case '/':
           std::cout << "Enter first number: ";
           std::cin >> num1;
           std::cout << "Enter second number: ";
           std::cin >> num2;
           if (num2 == 0) {
            std::cout << "Error! Division with 0 detected." << std::endl;
           }
           else {
               std::cout << "Result: " << results(op, num1, num2) << std::endl;
           }
           break;
           case 's':
           std::cout << "Enter a number: ";
           std::cin >> num1;
           std::cout << "Result: " << square_root(num1) << std::endl;
           break;
           case '^':
           std::cout << "Enter first number: ";
           std::cin >> num1;
           std::cout << "Enter second number: ";
           std::cin >> num2;
           if (num1 == 0 && num2 == 0) {
               std::cout << "Unspecified." << std::endl;
           }else {
               std::cout << "Result: " << results(op, num1, num2) << std::endl;
           }
           break;
           case '%':
           std::cout << "Enter first number: ";
           std::cin >> num1;
           std::cout << "Enter second number: ";
           std::cin >> num2;
           std::cout << "Result: " << results(op, num1, num2) << std::endl;
           break;
           default:
           std::cout << "invalid operation! Please use(*,+,-,/,s,^,%) " << std::endl;
           break;
        }
        std::cout << "-------------------------------" << std::endl;
    }
}
