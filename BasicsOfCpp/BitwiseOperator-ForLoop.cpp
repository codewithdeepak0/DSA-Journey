//<--------BITWISE OPERATOR, FOR LOOP, OPERATOR PRECEDENCE, VARIABLE SCOPE, LEETCODE PROBLEM SOLVE--------->

#include <iostream>
using namespace std;

/*
--> Bitwise Operator.
--> Increment & Decriment Operator.

int main()
{

    int a = 9;
    int b = 3;

    cout << " a&b " << (a & b) << endl;
    cout << " a|b " << (a | b) << endl;
    cout << " ~a " << ~a << endl;
    cout << " a^b " << (a ^ b) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    int i = 7;

    cout << (++i) << endl;
    // 8
    cout << (i++) << endl;
    // 8 , i = 9
    cout << (i--) << endl;
    // 9 , i = 8
    cout << (--i) << endl;
    // 7, i =7
    return 0;
}
*/


/*
-->Continue statement use.

int main() {

    for(int i=0; i<5; i++) {

        cout<< " HI " << endl;
        cout<< " Hello " << endl;
        continue;

        cout<< "Plzz Reply " <<endl;

    }
    return 0;
}
*/


/*
-->Program for Fibonachi Series.

int main() {

    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    cout<<a <<" " <<b<<" ";
    for(int i = 1; i<=n; i++ ) {

        int nextNumber = a+b;
        cout<<nextNumber<<" ";

        a = b;
        b = nextNumber;
    }
    return 0;
}
*/


/*
-->For Loop & Break (Prime No.)

int main() {

    int n ;
    cout<<" enter the value of n" <<endl;
    cin >> n;

    bool isPrime = 1 ;

    for(int i = 2; i<n; i++) {

        //rem = 0, Not a Prime
        if(n%i == 0) {
            //cout<<" Not a Prime Number" << endl;
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 0) {
        cout<<" Not a Prime Number"<<endl;
    }
    else
    {
        cout<<"is a Prime Number "<<endl;
    }

    return 0;
}
*/


/*
-->For Loop(For Sum)

int main() {

    int n ;
    cout<<" enter the value of n" <<endl;
    cin >> n;

    int sum = 0;

    for(int i=1; i<=n; i++ ) {
        //sum = sum + i;
        sum += i;
    }

    cout<< sum <<endl;
    return 0;
}
*/


/*
-->Leet Code Problem No. 1281
   (Subtract the product and sum of digits of an integer)

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int prod = 1;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }

    int answer = prod - sum;
    cout << answer;
    return answer;
}
*/


/*
-->Leet Code Problem No. 191
   (Number of 1 Bits)

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    while (n != 0) {
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }
    cout << count << endl;
    return 0;
}
*/
