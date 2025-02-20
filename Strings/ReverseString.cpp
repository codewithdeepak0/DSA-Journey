#include <iostream>
using namespace std;

int reverseString(char arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char arr[20];

    cout << "Enter your string: ";
    cin >> arr;

    int length = getLength(arr);

    reverseString(arr, length);
    cout << "Reverse string is: " << arr << endl;
}