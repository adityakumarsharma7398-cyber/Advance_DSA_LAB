// program for finding Nth fabonaic number using recursion and improving its run time to save steps operations
#include <iostream>
using namespace std;

int fib(int n, int memo[]) {
    // Base cases
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    // If already calculated, return it
    if (memo[n] != -1)
        return memo[n];

    // Calculate and store the result
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);

    return memo[n];
}

int main() {
    int n;

    cout << "Enter N: ";
    cin >> n;

    int memo[n + 1];

    // Initialize memo array
    for (int i = 0; i <= n; i++)
        memo[i] = -1;

    cout << "Nth Fibonacci number = " << fib(n, memo);

    return 0;
}