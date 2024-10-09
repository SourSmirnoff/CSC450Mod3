#include <iostream>

using namespace std;

int main() {
    // variables to store input
    int num1, num2, num3;

    // input 3 ints
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Enter the third integer: ";
    cin >> num3;

    // integer pointers/allocate dynamic memory
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // store values
    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;

    // display the contents
    cout << "\nVariable Values:" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;

    cout << "\nPointer Values:" << endl;
    cout << "*ptr1: " << *ptr1 << endl;
    cout << "*ptr2: " << *ptr2 << endl;
    cout << "*ptr3: " << *ptr3 << endl;

    // Free memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // avoid dangling pointers
    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    return 0;
}