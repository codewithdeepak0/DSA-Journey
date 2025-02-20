#include <iostream>
using namespace std;

int countSetBits(int value)
{
    int count = 0;
    while (value)
    {
        count += value & 1; // Check the least significant bit
        value >>= 1;        // Right shift the bits
    }
    return count;
}

int main()
{
    int a, b;

    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    // Count the set bits in both a and b
    int totalSetBits = countSetBits(a) + countSetBits(b);

    cout << "Total number of set bits in " << a << " and " << b << " is: " << totalSetBits << endl;

    return 0;
}
