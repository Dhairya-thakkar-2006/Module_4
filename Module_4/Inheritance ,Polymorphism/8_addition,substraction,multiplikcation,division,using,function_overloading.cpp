#include<iostream>
using namespace std;

class Calculator {
public:
    int operate(int a, int b) {
        return a + b;
    }

    double operate(double a, int b) {
        return a - b;
    }

    long int operate(int a, long int b) {
        return a * b;
    }

    double operate(double a, double b) {
        return a / b;
    }
};

int main() {
    Calculator calc;
    cout << "\n\n\tAddition is :  " << calc.operate(10, 5);
    cout << "\n\n\tSubtraction is :  " << calc.operate(10.0, 5);
    cout << "\n\n\tMultiplication is :  " << calc.operate(10, 5L);
    cout << "\n\n\tDivision is :  " << calc.operate(10.0, 5.0) ;

    return 0;
}
