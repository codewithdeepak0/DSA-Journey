#include<iostream>
using namespace std;

int factorial(int n){

    //Base Case
    if(n==0){
        return 1;
    }

    int smallerProblem = factorial(n-1);
    int bigProblem = n * smallerProblem;

    return bigProblem;
}

int main(){

    int n;
    cin >> n;

    cout << "Factorial of " << n << " is " << factorial(n) << endl;

}