#include <iostream>
#include <regex>
using namespace std;

// variables declaration here
string email;
string pattern;

int main()
{
    // get email address from user
    cout << "Enter an email address: ";
    cin >> email;

    regex pattern("^\\w+@\\w+\\.\\w+$");
    if (regex_match(email, pattern))
    {
        cout << "\nValid email.";
    }
    else
    {
        cout << "\nInvalid email.";
    }
}
