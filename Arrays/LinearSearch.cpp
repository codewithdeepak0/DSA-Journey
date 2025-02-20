#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[10] = {5, 10, 3, 8, 6, 4, 99, 39, -2, 0};

    int key;
    cout << "Enter the key element to search for: ";
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Key element is present" << endl;
    }
    else
    {
        cout << "Key elemetn is absent " << endl;
    }
}