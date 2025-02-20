#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void bark(){
        cout << "barking " << endl;
    }
};

class Human{
    public:
    string ThoughtPower;

    void speak(){
        cout << "Speaking " << endl;
    }
};

class Men : public Animal, public Human{

};

int main(){
    Men Deepak;

    Deepak.speak();

    cout << Deepak.age << endl;
    return 0;
}