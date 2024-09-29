#include<iostream>
using namespace std;

class MyClass {
private:
    int x;
public:
    // Constructor
    MyClass(int val) {
        x = val;
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }

    // Function to display value
    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    MyClass obj(10);
    obj.display();

    return 0;
}