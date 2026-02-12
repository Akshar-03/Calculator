#include <iostream>
using namespace std;

int main()
{
    for (;;)
    {
        int a, b;
        char operation;

        cout << "Enter first operand: ";
        cin >> a;
        cout << "Enter operator (e to terminate): ";
        cin >> operation;
        if (operation == 'e')
            break;
        cout << "Enter second operand: ";
        cin >> b;

        if (operation == '+')
            cout << a + b;
        else if (operation == '-')
            cout << a - b;
        else if (operation == '*')
            cout << a * b;
        else if (operation == '/')
            cout << a / b;
        else if (operation == '%')
            cout << a % b;
        cout << '\n';
    }
}