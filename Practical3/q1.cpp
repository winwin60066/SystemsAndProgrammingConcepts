#include <iostream>
#include <string>  // for std::string

using namespace std;

int main() {
    struct DATE {
        int birthYear;
        int birthMonth;
        int birthDay;
    };

    struct STUDENT {
        string studentName;  // Use string for names
        string icNo;         // Use string for IC number
        char studSex;        // char for 'M' or 'F'
        DATE birthday;       // Store birth date using DATE struct
    };

    STUDENT studrec[10];  // Array to hold 10 students

    // Step iii: Prompt user to input 3 sets of student records
    for (int i = 0; i < 3; i++) {  // Get details for 3 students
        cout << "Enter details for student #" << (i + 1) << endl;

        cout << "Name: ";
        getline(cin, studrec[i].studentName);  // Use getline to read the full name

        cout << "IC Number: ";
        getline(cin, studrec[i].icNo);  // Use getline to read the IC number

        // Step iv: Prompt for sex
        cout << "Sex (M/F): ";
        cin >> studrec[i].studSex;  // Use cin to read the sex
        cin.ignore();  // Ignore the newline left by cin

        // Step v: Input birth date
        cout << "Birth Date (day month year): ";
        cin >> studrec[i].birthday.birthDay >> studrec[i].birthday.birthMonth >> studrec[i].birthday.birthYear;
        cin.ignore();  // Ignore the newline left by cin
    }

    // Step vi: Assign "Steven Ken" to the 2nd student name
    studrec[1].studentName = "Steven Ken";

    // Step vii: Display the last four digits of the IC number of the 3rd student
    cout << "\n--- Last four digits of IC Number for 3rd Student ---" << endl;
    cout << "Last four digits of IC for Student #3: " << studrec[2].icNo.substr(studrec[2].icNo.length() - 4) << endl;

    // Step viii: Prompt user to input a new birth date for the 1st student
    cout << "\nEnter new birth date for Student #1:" << endl;
    cout << "Birth Date (day month year): ";
    cin >> studrec[0].birthday.birthDay >> studrec[0].birthday.birthMonth >> studrec[0].birthday.birthYear;
    cin.ignore();  // Ignore the newline left by cin

    // Step v: Validate all the sex stored in the studrec variable
    cout << "\n--- Displaying and Validating Student Records ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student #" << (i + 1) << endl;
        cout << "Name: " << studrec[i].studentName << endl;
        cout << "IC Number: " << studrec[i].icNo << endl;
        cout << "Sex: " << studrec[i].studSex << endl;
        cout << "Birth Date: " 
             << studrec[i].birthday.birthDay << "/"
             << studrec[i].birthday.birthMonth << "/"
             << studrec[i].birthday.birthYear << endl;

        // Step v: Validate sex and correct if necessary
        while (studrec[i].studSex != 'M' && studrec[i].studSex != 'F') {
            cout << "Wrong sex for student #" << (i + 1) << " (" << studrec[i].studentName << ")!" << endl;
            cout << "Re-enter sex (M/F): ";
            cin >> studrec[i].studSex;
            cin.ignore();  // Ignore the newline left by cin
        }
    }

    // Step ix: Display the updated student details after changes
    cout << "\n--- Displaying All Updated Student Records ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student #" << (i + 1) << endl;
        cout << "Name: " << studrec[i].studentName << endl;
        cout << "IC Number: " << studrec[i].icNo << endl;
        cout << "Sex: " << studrec[i].studSex << endl;
        cout << "Birth Date: " 
             << studrec[i].birthday.birthDay << "/"
             << studrec[i].birthday.birthMonth << "/"
             << studrec[i].birthday.birthYear << endl;
    }

    return 0;
}
