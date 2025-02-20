#include<iostream>
using namespace std;

class abstraction{
    private:
    string UserName;
    int Password;

    public:
    void set(string UserName, int Password){
        this -> UserName = UserName;
        this -> Password = Password;
    }

    void display(){
        cout << "User Name is: " << UserName << endl;
        cout << "Password is: " << Password << endl;
    }
};

int main(){
    abstraction User;
    User.set("CodeWithDeepak", 12345);
    User.display();
    return 0;
}