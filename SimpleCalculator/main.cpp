#include <iostream>

float results(char op, float num1, float num2){
    float result;
    if (op == '+') {
        result = num1 + num2;
    }else if(op == '-'){
        result = num1 - num2;
    }else if (op == '*') {
        result = num1 * num2;
    }else if(op == '/'){
        result = num1 / num2;
    }
    return result;
}

int main(){
    float num1, num2;
    char op;
    results(op, num1, num2);
    while (true) {
       std::cout << "Enter first number: ";
       std::cin >> num1;
       std::cout << "Choose a process(*,/,+,-)or 'q' and 'Q' to exit: ";
       std::cin >> op;

       if (op == 'q' || op == 'Q') {
           std::cout << "Exiting the program..." << std::endl;
           break;
       }
       std::cout << "Enter second number: ";
       std::cin >> num2;

       switch (op) {
           case '+':
           std::cout << "Result: " << results(op, num1, num2) << std::endl;
           break;
           case '-':
           std::cout << "Result: " << results(op, num1, num2) << std::endl;
           break;
           case '*':
           std::cout << "Result: " << results(op, num1, num2) << std::endl;
           break;
           case '/':
           if (num2 == 0) {
            std::cout << "Error! Division with 0 detected." << std::endl;
           }
           else {
               std::cout << "Result: " << results(op, num1, num2) << std::endl;
           }
           break;
           default:
           std::cout << "invalid input" << std::endl;
           break;
        }
        std::cout << "-------------------------------" << std::endl;
    }
}
