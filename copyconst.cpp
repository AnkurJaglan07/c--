#include <iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    int age;
    // Parameterized constructor: Initializes an object with the given values
    Employee(int id, string name, int age){
        this->id = id;
        this->name = name;
        this->age = age;
    }
    // Default constructor: Initializes an object with default values
    Employee(){
        id = 0;
        name = "No Name";
        age = 0;
    }
    // Copy constructor: Initializes an object with another object
    //a copy constructor is an overloaded constructor  used to declare and initialize an object with another object
    Employee(const Employee &e){   
        id = e.id;
        name = e.name;
        age = e.age;
    }
    void display(){
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl << endl;
    }
};

int main() {
    Employee e1(1, "John", 25);
    Employee e2;
    e1.display();
    e2.display();
    Employee e3 = e1;
    e3.display();
    Employee e4(e1);
    e4.display();
}