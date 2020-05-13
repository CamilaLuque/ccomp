// Demonstrating C++ Standard Library class template vector.

#include <iostream>
#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

//7.19



int main() {
    array<int, 7> integers1; // 7-element vector<int>
    array<int, 10> integers2; // 10-element vector<int>

    void outputArray1(const array<int, 7>integers1) {
        for (int i = 0; i < integers1.size(); i++) {
            cout << integers1[i] << endl;
        }
    }

    void outputArray2(const array<int, 10>integers2) {
        for (int i = 0; i < integers2.size(); i++) {
            cout << integers2[i] << endl;
        }
    }

    // print integers1 size and contents
    cout << "Size of array integers1 is " << integers1.size() << "\nvector after initialization:";
    outputArray1(integers1);

    // print integers2 size and contents
    cout << "\nSize of array integers2 is " << integers2.size() << "\nvector after initialization:";
    outputArray2(integers2);

    // input vector contents
    void inputArray1(const array<int, 7>integers1) {
        for (int i = 0; i < integers1.size(); i++) {
            cin << integers2[i] << endl;
        }
    }
    void inputArray2(const array<int, 10>integers2) {
        for (int i = 0; i < integers2.size(); i++) {
            cin << integers2[i] << endl;
        }
    }

    // input and print integers1 and integers2
    cout << "\nEnter 17 integers:" << endl;
    inputArray1(integers1);
    inputArray2(integers2);

    cout << "\nAfter input, the array contain:\n" << "integers1:";
    outputArray1(integers1);
    cout << "integers2:";
    outputArray2(integers2);

    // use inequality (!=) operator with array objects
    cout << "\nEvaluating: integers1 != integers2" << endl;

    if (integers1 != integers2) {
        cout << "integers1 and integers2 are not equal" << endl;
    }

    // create vector integers3 using integers1 as an
    // initializer; print size and contents
    array<int, 1> integers3{ integers1 }; // copy constructor

    void outputArray3(const array<int, 1>integers3) {
        for (int i = 0; i < integers3.size(); i++) {
            cout << integers3[i] << endl;
        }
    }
    cout << "\nSize of vector integers3 is " << integers3.size() << "\nvector after initialization: ";
    outputArray3(integers3);

    // use overloaded assignment (=) operator
    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2; // assign integers2 to integers1

    cout << "integers1: ";
    outputArray1(integers1);
    cout << "integers2: ";
    outputArray2(integers2);

    // use equality (==) operator with vector objects
    cout << "\nEvaluating: integers1 == integers2" << endl;

    if (integers1 == integers2) {
        cout << "integers1 and integers2 are equal" << endl;
    }

    // use square brackets to use the value at location 5 as an rvalue
    cout << "\nintegers1[5] is " << integers1[5];

    // use square brackets to create lvalue
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1: ";
    outputArray1(integers1);
    cout << "integers1: ";
    outputArray1(integers1);

    // attempt to use out-of-range subscript
    try {
        cout << "\nAttempt to display integers1.at(15)" << endl;
        cout << integers1.at(15) << endl; // ERROR: out of range
    }
    catch (out_of_range& ex) {
        cerr << "An exception occurred: " << ex.what() << endl;
    }

    // changing the size of a vector
    array<int, 2>integers4;
    cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
    integers4[0] = integers3[0]
        integers4[1] = 1000; // add 1000 to the end of the vector
    cout << "New integers3 size is: " << integers4.size() << endl;
    cout << "integers3 now contains: ";
    void outputArray4(const array<int, 2>integers4) {
        for (int i = 0; i < integers4.size(); i++) {
            cout << integers4[i] << endl;
        }
    }
    outputArray4(integers4);
}