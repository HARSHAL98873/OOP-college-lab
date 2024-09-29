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

    // Copy Constructor
    MyClass(const MyClass& obj) {
        x = obj.x;
        cout << "Copy Constructor called" << endl;
    }

    // Function to display value
    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(obj1);

    obj1.display();
    obj2.display();

    return 0;
}