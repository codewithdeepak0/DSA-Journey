#include<iostream>
using namespace std;

void merge(int *arr, int s, int e, int mid){

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int [len1];
    int *second = new int [len2];

    //Copying Values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    //Merge-2 Sorted Array

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e){
    //Base Case
    if(s>=e){
        return;
    }

    int mid = s+(e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e, mid);
}

int main(){
    int arr[5] = {5,8,3,9,4};
    int n = 5;

    mergeSort(arr,0,n-1);

    //Print an Array

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}