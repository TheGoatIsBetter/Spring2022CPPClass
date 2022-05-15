#include <iostream>

using namespace std;

void unique_example() {
    unique_ptr<int> data = make_unique<int>(5); //creates a unique pointer to an int of value 5


    cout << "Unique Pointer out of scope on next line, exiting this function..." << endl;
} //out of scope and kills the pointer

void shared_example() {
    shared_ptr<int> data = make_shared<int>(2); //creates a shared pointer to an int of value 2

    shared_ptr<int> data2 = data; //you can copy this, unlike a unique

    cout << "Shared Pointers out of scope on next line, exiting this function..." << endl;
} //out of scope and kills both pointers here

void weak_example() {
    shared_ptr<int> data = make_shared<int>(10); //creates a shared pointer for the weak pointer to use
    
    weak_ptr<int> wdata(data);

    cout << "Weak and Shared Pointers out of scope on next line, exiting this function..." << endl;
} //out of scope and kills both pointers



int main()
{
    //run the example functions to show that the smart pointers delete when out of scope of their respective functions
    unique_example();
    shared_example();
    weak_example();
}


//the below article helped out immensely, I'm probably actually gonna keep this assignment for future
// reference so I'm gonna link it for when I do and need a better more indepth explanation than I put here
//https://www.internalpointers.com/post/beginner-s-look-smart-pointers-modern-c#:~:text=Understanding%20std%3A%3Aunique_ptr%20%3A%20the,scope%2C%20the%20object%20is%20deleted.