#include <iostream>
using namespace std;

// Function to print Fibonacci numbers from 0 to n using recursion
void printFibo(int n)
{
    // Base cases: print the first Fibonacci numbers
    if (n < 0)
        return;  // If n is negative, do nothing
    if (n == 0)
    {
        cout << "0 ";
        return;
    }
    if (n == 1)
    {
        cout << "0 1 ";
        return;
    }
    
    // Recursive case: first print the Fibonacci numbers up to n-1, then print fib(n)
    printFibo(n - 1); // Print Fibonacci sequence for n-1
    cout << fibo(n) << " "; // Print the nth Fibonacci number
}

// Recursive function to calculate the nth Fibonacci number
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cin >> n;

    // Print Fibonacci series from 0 to n
    printFibo(n);

    cout << endl;

    return 0;
}
