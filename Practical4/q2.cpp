#include <iostream>
using namespace std;

int main()
{
    // Variables Declaration - Integer
    int num = 10;
    int *ptrNum;
    ptrNum = &num;

    // cout based on sample output given
    cout << "Integer value : " << num << endl;
    cout << "Integer value using pointer : " << *ptrNum << endl;
    cout << "Address of variable using & : " << &num << endl;
    cout << "Address of variable using pointer : " << ptrNum << endl;
    cout << "Size of variable : " << sizeof(num) << endl
         << endl;

    // Variables Declaration - Double
    double dnum = 12.34;
    double *ptrDNum;
    ptrDNum = &dnum;
    // cout based on sample output given

    // Variables Declaration - Char
    char ch = 'c';
    char *ptrCh;
    ptrCh = &ch;
    // cout based on sample output given
    cout << "Address of variable using & : " << static_cast<void *>(&num) << endl;
    cout << "Address of variable using pointer : " << static_cast<void *>(ptrNum) << endl;

    return 0;
}