#include <iostream>
using namespace std;

int main() {
    // Integer pointer
    int *ptr, b = 10;
    ptr = &b;
    cout << *ptr << "    " << b << endl << ptr << "    " << &b << endl;
    ptr++;
    cout << "After increment: " << ptr << endl;

    // Float pointer
    float *n, a = 8.923;
    n = &a;
    cout << endl << *n << "    " << a << endl << n << "    " << &a << endl;
    n++;
    cout << "After increment: " << n << endl;

    // Char pointer
    char *ch, c;
    c = '#';
    ch = &c;
    cout << endl << (void*)ch << endl;
    ch++;
    cout << "After increment: " << (void*)ch << endl;

    return 0;
}
/*Output: 
10    10
0x61ff08    0x61ff08
After increment: 0x61ff0c

8.923    8.923
0x61ff04    0x61ff04
After increment: 0x61ff08

0x61ff03
After increment: 0x61ff04

*/
