#include<iostream>
using namespace std;

class MyClass {
private:
    int x;
public:
    MyClass(int val) {
        x = val;
    }

    void setX(int val) {
        x = val;
    }

    int getX() {
        return x;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    MyClass obj(10);
    obj.display();
    obj.setX(20);
    obj.display();
    cout << "Value: " << obj.getX() << endl;
    return 0;
}