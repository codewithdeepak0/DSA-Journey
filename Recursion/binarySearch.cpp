#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key){
    if(s>e){
        return false;
    }
    
    int mid = s + (e-s)/2;

    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key ){
        return binarySearch(arr, mid+1, e, key);
    }else{
        return binarySearch(arr, s, mid-1, key);
    }
}

int main(){

    int arr[6] = {1,4,7,9,3,8};
    int size = 6;
    int key = 4;

    bool ans = binarySearch(arr, 0, size-1, key);

    if(ans){
        cout << "Key is persent" << endl;
    }else{
        cout << "Key is not persent" << endl;
    }
}