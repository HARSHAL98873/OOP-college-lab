#include<iostream>
using namespace std;

class MyClass {
private:
    int x;
public:
    // Constructor
    MyClass(int val) {
        x = val;
    }

    // Friend function
    friend void display(MyClass obj);
};

// Friend function definition
void display(MyClass obj) {
    cout << "Value: " << obj.x << endl;
}

int main() {
    MyClass obj(10);
    display(obj);

    return 0;
}