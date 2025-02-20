#include<iostream>
using namespace std;

class Parent {
    public:
    string Name;
    int Age;

    public:
    void speak(){
        cout << "Speaking" << endl;
    }
};

class Child : public Parent{
    string Level;
};

int main(){
    Child Hero;

    Hero.speak();

    cout << Hero.Age << endl;


    return 0;
}