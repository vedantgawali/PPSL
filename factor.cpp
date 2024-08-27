#include <iostream>
using namespace std;
unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;  // Start with 1, as factorial of 0 is 1
    for (int i = 1; i <= n; ++i) {  // Loop from 1 to n
        result *= i;                // Multiply result by the loop index
    }
    return result;                 // Return the computed factorial
}
unsigned long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;                  // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorialRecursive(n - 1); // Recursive case
    }
}

int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;  // Exit with error code
    }
    unsigned long long iterativeResult = factorialIterative(number);
    cout << "Iterative factorial of " << number << " is: " << iterativeResult << endl;
    unsigned long long recursiveResult = factorialRecursive(number);
    cout << "Recursive factorial of " << number << " is: " << recursiveResult << endl;
return 0;
}
