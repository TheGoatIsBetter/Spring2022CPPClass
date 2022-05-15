
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Changer = "Yortle";

    string& Ref1Changer = Changer;
    string& Ref2Changer = Changer;
    string& Ref3Changer = Changer;


    cout << Changer << endl;

    Changer = "Tortle";

    cout << Ref1Changer << endl;
    cout << Ref2Changer << endl;
    cout << Ref3Changer << endl;
}


