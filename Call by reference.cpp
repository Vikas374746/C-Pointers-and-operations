#include <iostream>
using namespace std;

void swap(int &x, int &y) // pass by reference
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()   
{    
    int a = 5, b = 2;
    swap(a, b);  // actual values get swapped
    cout << "Value of a is: " << a << endl;
    cout << "Value of b is: " << b << endl;
    return 0;
}
/*
Output:
Value of a is: 2
Value of b is: 5
*/
