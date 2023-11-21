#include <iostream>
using namespace std;
int main()
{
    int number1, number2;

    // Input for the first number
    cout << "Enter the first integer: ";
    cin >> number1;

    // Input for the second number
    cout << "Enter the second integer: ";
    cin >> number2;

    // Calculate the sum
    int result = number1 + number2;

    // Display the result
    cout << "Sum: " << result << endl;
    return 0;
}