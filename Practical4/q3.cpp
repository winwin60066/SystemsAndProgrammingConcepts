#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // Variable declaration
    char s[10] = "abcde";
    char *cptr;
    cptr = s;  // OR cptr = &s[0];

    int length = strlen(s) - 1;
    for (int i = length; i >= 0; i--)
    {
        cout << *(cptr + i);
    }

    return 0;
}
