#include <iostream>  // Correct header for C++ I/O operations
using namespace std;

class A {
    int x;   // Correct declaration of the integer
    A *p;
        // Pointer to class A

public:
    // Function to set data and pointer
    void setdata(int d, A *pb) {
        x = d;
        p = pb;
    }

    // Function to display data
    void display() {
        cout << x << " " << (*p).x << endl;  // Correct usage of quotes and endl x 
    }
};

int main() {
    A a, b;  // Create two objects of class A

    a.setdata(10, &b);  // Set data for 'a' and pass address of 'b'
    b.setdata(20, &a);  // Set data for 'b' and pass address of 'a'

    a.display();  // Display data of 'a'
    b.display();  // Display data of 'b'

    return 0;
}