#include <iostream>
#include <regex>
using namespace std;

// Define the bad word and sentence as strings
    string badWord = "damm";
    string sentence = "The product is damm useless!";

int main() {
    
    // Use regex_replace to replace the bad word with ****
    string cleanReview = regex_replace(sentence, regex(badWord), "****");

    // Display the cleaned review
    cout << cleanReview << endl;

    return 0;
}
