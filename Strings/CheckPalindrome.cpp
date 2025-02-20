#include <iostream>
using namespace std;

bool checkPlaindrome(char arr[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
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

    cout << "Palindroem or not: " << checkPlaindrome(arr, length) << endl;
}