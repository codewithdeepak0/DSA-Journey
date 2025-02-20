#include<iostream>
using namespace std;

/*
int main(){
    int a, b;
    char op;

    cout << "Enter the value of a:" << " ";
    cin >> a;

    cout << "Enter the value of b:" << " ";
    cin >> b;

    cout << "Enter the operation which you want to perform:" << " ";
    cin >> op;

    switch (op){

        case '+': cout << (a+b) << endl;
                break;

        case '-': cout << (a-b) << endl;
                break;

        case '*': cout << (a*b) << endl;
                break;

        case '/': cout << (a/b) << endl;
                break;

        case '%': cout << (a%b) << endl;
                break;

        default: cout << "Please enter a vaild operation" << endl;
    }

    return 0;

}
*/

int main(){
    int n;
    cout << "Enter the amount: " ;
    cin >> n;

    int Rs100, Rs20, Rs1;

    switch (1){

        case 1 : Rs100 = n/100;
                n = n%100;
                cout << "Total No. of 100 notes: " << Rs100 << endl;

        case 2 : Rs20 = n/20;
                n = n%20;
                cout << "Total no of 20 notes: " << Rs20 << endl;

        case 3 : Rs1 = n/1;
                n = n%1;
                cout << "Total no is 1 notes: " << Rs1 << endl;
    }

    return 0;
}