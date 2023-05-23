#include <iostream>
using namespace std;

int main()
{
    cout << "Calculator" << endl;

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    int difference = num1 - num2;
    cout << "Difference: " << difference << endl;

    int product = num1 * num2;
    cout << "Product: " << product << endl;

    double quotient = static_cast<double>(num1) / num2;
    cout << "Quotient: " << quotient << endl;

    return 0;
}
