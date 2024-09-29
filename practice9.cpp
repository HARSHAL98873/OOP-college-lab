#include<iostream>
using namespace std;

class hacker
{
    public:
    int id;
    
    //Default Constructor
    hacker()
    {
        cout<< "Default Constructor called" <<endl; 
        id=-1;
    }
    
    //Parameterized Constructor
    hacker(int x)
    {
        cout <<"Parameterized Constructor called "<< endl;
        id=x;
    }
};
int main() {
    
    // obj1 will call Default Constructor
    hacker obj1;
    cout <<"hacker id is: "<<obj1.id << endl;
    
    // obj2 will call Parameterized Constructor
    hacker obj2(21);
    cout <<"hacker id is: " <<obj2.id << endl;
    return 0;
}
