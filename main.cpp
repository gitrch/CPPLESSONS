
#include <iostream>
#include <string>
using namespace std;

//Main function
int main() {

    string fact;

    //Ask user for age (asks for users input int)

    cout << "What is your age?" << endl;
    cout << "Enter age here: ";
    getline (cin,fact);
    cout << "You are " << fact << " years old" "\n";

    //Ask user for favorite color (asks for users input char)

    cout << "What is your favorite color?" "\n";
    cout << "Enter Favorite color here: ";
    getline (cin,fact);
    cout << "Your favorite color is " << fact << "\n";

    //Ask user for any programming experience (yes/no/char)

    cout << "Do you have any programming experience?" "\n";
    cout << "Enter (Yes/No) Only: ";
    getline (cin,fact);

    //If user inputs "no" then they receive answer "a"

    if (fact.compare("no") == 0 )
        cout << "Your programming experience is low, keep learning!"; //"a"

    //If user inputs "yes" then they receive answer "b"

    if (fact.compare("yes") == 0 )
        cout << "You are a Pro Programmer, but still lots to learn."; //"b"
}
