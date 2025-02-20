#include<iostream>
using namespace std;

class encapsulation{
    public:
    string Name;
    int Age;
    string Level;

    public:
    string getName(){
        return Name;
    }
    void setName(string name){
        this->Name = name;
    }

    int getAge(){
        return Age;
    }

    int setAge(int age){
        this -> Age = age;
        return age;
    }

    string getLeval(){
        return Level;
    }

    void setLevel(string level){
        this -> Level = level;
    }

};

int main(){

    encapsulation Hello;

    Hello.setName("Deepak");
    Hello.setAge(20);
    Hello.setLevel("A");

    cout << "Name is : " << Hello.getName() << endl;
    cout << "Age is: " << Hello.getAge() << endl;
    cout << "Level is: " << Hello.getLeval() << endl;


    return 0;
}