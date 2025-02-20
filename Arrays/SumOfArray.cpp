#include <iostream>
using namespace std;

void sumArray(int arr[], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of array is: " << sum << endl;
}

int main()
{

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sumArray(arr, size);
}