/*
// --> Leet Code Problem No.7 (Reverse Interger)
#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int digit = 0, ans = 0;
    while (n != 0)
    {
        digit = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }

        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << "Reverse Number is " << ans << endl;
    return ans;
}
*/

/*
// --> Leetcode Problem no. 1009 (Complement of base 10 integer).
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Negative numbers not supported." << endl;
        return 1;
    }

    int m = n;
    int mask = 0;

    if (n == 0)
    {
        cout << "Complement of 0 is 1." << endl;
        return 0;
    }

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout << "The complement of " << n << " is: " << ans << endl;

    return 0;
}
*/

/*
// -->  --> Leetcode Problem no. 476 (Number Complement).

 This question is same as 1009-question
 As well as solution

*/

/*
// --> Leetcode Problem no. 231 (Power of Two).
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPowerOfTwo = (n > 0) && ((n & (n - 1)) == 0);

    if (isPowerOfTwo) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is not a power of two." << endl;
    }

    return 0;
}
*/
