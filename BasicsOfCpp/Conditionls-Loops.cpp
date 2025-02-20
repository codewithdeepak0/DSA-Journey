#include<iostream>
using namespace std;

int main(){

    char a;
    cout << "Enter the value of a"<< endl;
    cin >> a;

    if(a >= 'A' && a <= 'Z'){
        cout << "a is upper case" << endl;
    }
    else if (a >= 'a' && a<= 'z')
    {
        cout << "a is lower case" << endl;
    }
    else if (a >= '0' && a <= '9')
    {
        cout << "a is numaric" << endl;
    }
    return 0;
    
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    while(i<=n){
        cout<< i << " ";
        i = i + 1;
    }

}


int main(){
    int n;
    cin >> n;

    int i = 1;
    int sum = 0;

    while(i<=n){
        sum = sum +i;
        i = i + 1;
    }
    cout << "value of sum is "<< sum <<endl;
}


int main(){
    int n;
    cin >> n;

    int i = 2;
    int sum = 0;

    while(i <= n){
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum of Even numbers is: " << sum << endl;   
}


int main(){
    int n;
    cout << "Enter a No. ";
    cin >> n;

    int i = 2;

    while(i<n){
        if(n%i==0){
            cout << "Given No. is Not Prime " << endl;
        }
        else{
            cout << "Given no. is Prime " << endl;
        }
        i = i+1;
    }
}
