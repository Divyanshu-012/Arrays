#include <iostream>
using namespace std;

// Recursive function to compute the nth Fibonacci number
int f(int n) {
    if (n <= 1) return n;

    int last = f(n - 1);
    int slast = f(n - 2);
    return last + slast;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Call the recursive function to compute the nth Fibonacci number
    int result = f(n);

    // Print the result
    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}
