#include<iostream>
using namespace std;

int isPower(int n){

    //Base case

    if(n==0){
        return 1;
    }

    //Recursive Relation

    return 2 * isPower(n-1);
}

int main(){

    int n;
    cin >> n;

    cout << "The Power of "<< n << " is " << isPower(n) << endl;

    return 0;
}