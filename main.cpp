#include "requirements.h"

int main() {
    MathOperations calculator1;
    exponentialExpressions calculator2;
    trigonometricExpressions calculator3;
    double x,y, radian;
    int choice, angleUnit;
    const double pi = 3.14159265358979323846;
    std::cout << "======Wired Calculator======\n";
    while(true) {
        std::cout << "Welcome to Wired Calculator V1.0 ! \n-1 : Leave\n1 : 4 operation\n2 : Exponential expressions\n3 : Trionometrical expressions\n";
        std::cin >> choice;
        if(choice != -1 && choice != 1 && choice != 2 && choice != 3) {
            std::cout << "Please enter a valid choice!\n";
            continue;
        }
        if(choice == -1) {
            std::cout << "\nGoodbye Wired User . . .";
            return 0;
        }

        else if (choice == 1) {
            std::cout << "The 4 arithmetic operations category has been selected\n(1-Addition , 2-Subtraction , 3-Multiplication , 4-Division , 5-Take mod)\nSelect your choice: ";
            std::cin >> choice;
            if(choice == 1) {
                std::cout << "Addition selected; enter 2 numbers : ";
                std::cin >> x >> y;
                std::cout << x << " + " << y << " = " << calculator1.addition(x,y); 
            } else if(choice == 2) {
                std::cout << "Subtraction selected; enter 2 numbers : ";
                std::cin >> x >> y;
                std::cout << x << " - " << y << " = " << calculator1.subtraction(x,y); 
            } else if(choice == 3) {
                std::cout << "Multiplication selected; enter 2 numbers : ";
                std::cin >> x >> y;
                std::cout << x << " * " << y << " = " << calculator1.multiplication(x,y); 
            } else if(choice == 4) {
                std::cout << "Division selected; enter 2 numbers : ";
                std::cin >> x >> y;
                if(y == 0) {
                    std::cout << "Division by zero is not allowed.\n";
                    continue;
                }
                std::cout << x << " / " << y << " = " << calculator1.division(x,y); 
            } else if(choice == 5) {
                std::cout << "Mod operation selected; enter 2 numbers : ";
                std::cin >> x >> y;
                if(y == 0) {
                    std::cout << "Mod by zero is not allowed.\n";
                    continue;
                }
                std::cout << x << " % " << y << " = " << calculator1.takeMod(x,y); 
            } else{
                std::cout << "Please enter a valid operation!\n";
                continue;
            }
        }
        else if(choice == 2) {
            std::cout << "The exponential operations category has been selected\n(1-Exponentiation , 2-Square root , 3-Cube root , 4-Log , 5-Hypot)\nSelect your choice: ";
            std::cin >> choice;
            if(choice == 1) {
                std::cout << "Exponentiation operation selected; enter the base and the exponent : ";
                std::cin >> x >> y;
                double result = calculator2.exp(x,y);
                if(!std::isfinite(result)) {
                    std::cout << "Invalid exponentiation input or result.\n";
                    continue;
                }
                std::cout << x << " to the power of " << y << " = " << result; 
            } else if(choice == 2) {
                std::cout << "The square root operation has been selected; please enter the number for which you wish to calculate the square root : ";
                std::cin >> x;
                if(x < 0) {
                    std::cout << "A negative number does not have a real square root.\n";
                    continue;
                }
                std::cout << "√" << x <<  " = " << calculator2.sqrt(x); 
            } else if(choice == 3) {
                std::cout << "The cube root operation has been selected; please enter the number for which you wish to calculate the cube root : ";
                std::cin >> x;
                std::cout << "∛" << x <<  " = " << calculator2.cqrt(x); 
            } else if(choice == 4) {
                std::cout << "Log calculation selected; please enter a number : ";
                std::cin >> x;
                if(x <= 0) {
                    std::cout << "Logarithm is only defined for numbers greater than zero.\n";
                    continue;
                }
                std::cout << "log " << x <<  " = " << calculator2.log(x); 
            } else if(choice == 5) {
                std::cout << "Hypotenuse calculation selected; please enter the two legs (perpendicular sides) : ";
                std::cin >> x >> y;
                std::cout << "hypot: " << calculator2.hipo(x,y); 
            } else{
                std::cout << "Please enter a valid operation!\n";
                continue;
            }
        }
        else if(choice == 3) {
            std::cout << "The category of trigonometric expressions and operations has been selected\n(1-Sin , 2-Cos , 3-Tan , 4-Cot)\nSelect your choice: ";
            std::cin >> choice;
            std::cout << "Select the angle unit (1-Radian , 2-Degree): ";
            std::cin >> angleUnit;
            if(angleUnit == 2) {
                std::cout << "Degree mode selected.\n";
            } else if(angleUnit == 1) {
                std::cout << "Radian mode selected.\n";
            } else {
                std::cout << "Please enter a valid angle unit!\n";
                continue;
            }
            if(choice == 1) {
                std::cout << "Enter the number for which you want to find the sine : ";
                std::cin >> x;
                radian = (angleUnit == 2) ? x * pi / 180.0 : x;
                std::cout << "sin(" << x << ") = " << calculator3.sin(radian);
            } else if(choice == 2)  {
                std::cout << "Enter the number for which you want to find the cosine : ";
                std::cin >> x;
                radian = (angleUnit == 2) ? x * pi / 180.0 : x;
                std::cout << "cos(" << x << ") = " << calculator3.cos(radian);
            } else if(choice == 3) {
                std::cout << "Enter the number for which you want to find the tangent : ";
                std::cin >> x;
                radian = (angleUnit == 2) ? x * pi / 180.0 : x;
                std::cout << "tan(" << x << ") = " << calculator3.tan(radian);
            } else if(choice == 4) {
                std::cout << "Enter the number for which you want to find the cotangent : ";
                std::cin >> x;
                radian = (angleUnit == 2) ? x * pi / 180.0 : x;
                std::cout << "cot(" << x << ") = " << calculator3.cot(radian);
            } else{
                std::cout << "Please enter a valid operation!\n";
                continue;
            }
    }
}
}