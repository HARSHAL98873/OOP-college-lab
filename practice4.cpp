#include<iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    // Setter functions
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }

    // Getter functions
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
};

int main() {
    Person p;
    p.setName(" HACKER ");
    p.setAge(0);

    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}