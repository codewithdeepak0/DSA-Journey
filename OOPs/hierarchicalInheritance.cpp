#include<iostream>
using namespace std;

class A{
    public:
    void Fun1(){
        cout << "Class A" << endl;
    }
};

class B : public A{
    public:

    void Fun2(){
        cout << "Class B" << endl;
    }
};
class C : public A{
    public:
    
    void Fun3(){
        cout << "Class C" << endl;
    }
};

int main(){

    A object;
    object.Fun1();

    B object1;
    object1.Fun1();
    object1.Fun2();

    C object2;
    object2.Fun1();
    object2.Fun3();

    return 0;
}