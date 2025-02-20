#include <iostream>
using namespace std;

/*
// Function Call
int *fun()
{
    int x = 10;
    return &x;
}
int main()
{
    int *p = fun();
    // p points to something which is not
    // valid anymore
    cout << *p;
    return 0;
}
*/

/*
//Deallocation of memory
int main()
{
    // dynamic memory allocation.
    int *p = (int *)malloc(sizeof(int));
    // after calling free() p becomes a dangling pointer
    free(p);
    // now p no more a dangling pointer.
    p = NULL;
    return 0;
}
*/

/*
//Variable goes out of scope
void main() {
    int * ptr;
    //..... //any code statements
    {   int ch;
        ptr = & ch;
    }
    //....
    // Here ptr is dangling pointer
}
*/