#include "requirements.h"

double MathOperations::addition(double x , double y) {
    return x+y;
}
double MathOperations::subtraction(double x , double y) {
    return x-y;
}
double MathOperations::multiplication(double x , double y) {
    return x*y;
}
double MathOperations::division(double x , double y) {
    return x/y;
}
double MathOperations::takeMod(double x , double y) {
    return std::fmod(x,y);
}