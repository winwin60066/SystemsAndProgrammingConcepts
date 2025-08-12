#include <iostream>
#include <string>
using namespace std;

int main(){
    // variables declaration here
    string fullName = "John A. Doe";

    char firstSpace = fullName.find_first_of(' ');
    char lastSpace = fullName.find_last_of(' ');
    string firstName = fullName.substr(0,firstSpace);
    string lastName = fullName.substr(lastSpace + 1);
    // display to the user

    cout << "First: " << firstName << ", Last: " << lastName;
}
