/* CAlCULATOR BY C++
Learn: modular, while, if, switch
- reuse add, sub, mutiply, divide function easily
- able to add new function (pow, abs,...) without edit All code again
- do infinity calculation*/

#include <iostream>
#include <cmath>

#include "calculator.h"
using namespace std;
int main()
{
    char op;
    double num1;
    double num2;
    double result;
    // Welcome
    cout << "******************CALCULATOR********************" << endl;
    while (op != 'q')
    {
        // Choose operator (+ - * /)
        cout << " Choose operator ( + - * /) (q to exit): ";
        cin >> op;
        if (op == 'q')
        {
            cout << "Thank you for choosing our operator!";
        }
        else
        {
            // Input number 1
            cout << "Enter number 1: ";
            cin >> num1;

            // Input number 2
            cout << "Enter number 2: ";
            cin >> num2;

            // result
            switch (op)
            {
            case '+':
                result = add(num1, num2);
                cout << num1 << "+" << num2 << "=" << result << endl;
                break;

            case '-':
                result = sub(num1, num2);
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;

            case '*':
                result = multiply(num1, num2);
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;

            case '/':
                result = divide(num1, num2);
                cout << num1 << " / " << num2 << " = " << result << endl;
                break;
            default:
                cout << "there is no " << op << " operator." << endl;
                break;
            }
        }
    }
    return 0;
}