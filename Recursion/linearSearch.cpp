#include<iostream>
using namespace std;

bool linearSearch(int *arr,int size, int key){
    //base case
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }

    return linearSearch(arr+1, size-1, key);
}

int main(){

    int arr[6] = {2, 4, 7, 9, 5};
    int size = 6;
    int key = 90;

    bool ans = linearSearch(arr, size, key);

    if(ans){
        cout << "Key is persent" << endl;
    }else{
        cout << "Key is absent" << endl;
    }
}