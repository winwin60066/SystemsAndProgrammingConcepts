#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

int main(){

    //initialize array with empty string
    string studs[10][2] = {};
    //initialize marks to 0
    int marks[10] = {0};

    string studName;
    string studID;
    double studMark;
    char continueOption;
    int count = 1;

    
    do{
        cout << "Enter Student Name: -> ";
        cin >> studName;

        cout << "\nEnter Student ID: -> ";
        cin >> studID;

        cout << "\nEnter Mark: -> ";
        cin >> studMark;

        cout << "\nPress [Y] for more record, press [N] to stop\nOption: -> ";
        cin >> continueOption;
        continueOption = toupper(continueOption);

        count++;

        if(count >= 10){
            break;
        }

        }while(continueOption == 'Y');

        //student name, student id and mark havent store into array
    
    //display all student info inside array
    for(string stud:studs){
        cout << "No.Student Name" << setw(15) << "Student ID" << setw(15) << "Mark";
        cout << set
    }

}