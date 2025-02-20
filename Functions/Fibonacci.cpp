#include <iostream>
using namespace std;

int fibonacci(int n)
{

    int a = 0;
    cout << a << " ";
    int b = 1;
    cout << b << " ";

    for (int i = 1; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }
    return n;
}

int main()
{

    int n;
    cout << "Enter the n of tearm: ";
    cin >> n;

    fibonacci(n);

    return 0;
}