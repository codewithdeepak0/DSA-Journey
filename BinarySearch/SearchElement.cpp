#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    // Normally we can use this eqution but when we give big no. value which out of range for integer(2 the power 31 -1) its give error.
    // int mid = (start + end) / 2;

    // So we use this eqution for find mid
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int even[6] = {5, 8, 13, 19, 25, 30};
    int odd[5] = {1, 10, 19, 28, 32};

    int evenIndex = binarySearch(even, 6, 30);

    cout << "Index of 30 is: " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 28);

    cout << "Index of 28 is: " << oddIndex << endl;
}