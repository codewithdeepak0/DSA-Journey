#include<iostream>
using namespace std;

class GrandFather{
    public:
    string Property;
    int Pesa;

    public:
    void Home(){
        cout << "Prajapati Nivas" << endl;
    }
};

class Father : public GrandFather{
    public:
    int BankBalance;
    string Shop;
};

class Son : public Father{
    string Name;
};

int main(){

    Son Deepak;

    Deepak.Home();
    cout << Deepak.BankBalance << endl;
    cout << Deepak.Pesa << endl;

    return 0;
}