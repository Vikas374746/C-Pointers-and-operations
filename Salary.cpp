#include <iostream>
using namespace std;

void incrementSalary(int &salary) {
    salary = salary + 1000; // Increase by fixed amount
}

int main() {
    int salary = 5000;

    cout << "Before increment: " << salary << endl;
    incrementSalary(salary); // pass by reference
    cout << "After increment: " << salary << endl;

    return 0;
}
/*
Output:
Before increment: 5000
After increment: 6000
*/
