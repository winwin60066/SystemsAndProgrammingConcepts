#include <iostream>
#include <sstream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string input = "heLLo WoRLD";  // example input, you can replace it or take from user
    stringstream ss(input);
    string word;
    string result;
    while (ss >> word)
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        word[0] = toupper(word[0]);
        result += word + " ";
    }
    cout << result << endl; // display to the user
}
