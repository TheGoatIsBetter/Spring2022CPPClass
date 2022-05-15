#include <iostream>
#include <string>

using namespace std;

//person class for a demo
class Person {
private:
    //it has a name
    string name;

public:
    //constructor to set the name on creation and say it
    Person(string set_name) {
        name = set_name;
        cout << name << endl;
    }
};


int main()
{
    //creates a pointer for a new int with value of 5
    int* inger = new int(5);
    cout << *inger << " is the value of an integer created with new, allocating memory for itself on creation." << endl;
    //deletes the pointer
    delete inger;
    cout << "The pointer and allocated memory are now gone after using the delete keyword..." << endl;

    //creates a pointer for a new float with value of 5.5
    float* flt = new float(5.5);
    cout << *flt << " is the value of an float created with new, allocating memory for itself on creation." << endl;
    //deletes the pointer
    delete flt;
    cout << "The pointer and allocated memory are now gone after using the delete keyword..." << endl;

    //creates a pointer for a new char with value of t
    char* chr = new char('t');
    cout << *chr << " is the value of a char created with new, allocating memory for itself on creation." << endl;
    //deletes the pointer
    delete chr;
    cout << "The pointer and allocated memory are now gone after using the delete keyword..." << endl;

    //creates a pointer for a new bool with value of false
    bool* tstbl = new bool(false);
    cout << *tstbl << " is the value of a boolean created with new, allocating memory for itself on creation." << endl;
    //deletes the pointer
    delete tstbl;
    cout << "The pointer and allocated memory are now gone after using the delete keyword..." << endl;

    cout << "Creating people with their names" << endl;
    //creates new Person object pointers for Person objects with their own names
    Person* Jimmy = new Person("Jimmy");
    Person* Tommy = new Person("Tommy");
    Person* Pammy = new Person("Pammy");
    Person* Tammy = new Person("Tammy");
    Person* Cammy = new Person("Cammy");

    //deletes the pointers
    delete Jimmy;
    delete Tommy;
    delete Pammy;
    delete Tammy;
    delete Cammy;

    cout << "I have deleted all of the people using the delete keyword..." << endl;


}
