#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Doctor
{

    string name;
    string department;

}

struct Patient
{
    string name;
    int age;
    string allergies[3];
    Doctor doctors;
}

int
main()
{

    // initialize structs without values here
    Doctor doctors;
    Patient patients;

    for (int i = 0; i < 5; i++)
    {
        // get Patient name
        cout << "Enter patient name: ";
        cin >> patients[i].name;

        // get Patient age
        cout << "Enter patient age: ";
        cin >> patients[i].age;

        for (int j = 0; j < 3; j++)
        {
            // get Patient allergies by using patient[i].allergies[j]
        }
        // get Doctor's name
        cout << "Enter Doctor's name: ";
        cin >> doctors[i].name;
        // get Doctor's department
        cout << "Enter Doctor's department: ";
        cin >> doctors[i].department;

    }
    cout << "\n\n--- Patient Information ---\n";
    cout << left << setw(15) << "Name"
         << setw(5) << "Age"
         << setw(15) << "Allergy 1"
         << setw(15) << "Allergy 2"
         << setw(15) << "Allergy 3"
         << setw(20) << "Doctor"
         << setw(15) << "Department" << endl;
    cout << string(100, '-') << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << left << setw(15) << patients[i].name
             << setw(5) << patients[i].age
             << setw(15) << patients[i].allergies[0]
             << setw(15) << patients[i].allergies[1]
             << setw(15) << patients[i].allergies[2]
             << setw(20) << doctors[i].name
             << setw(15) << __________ << endl;
    }
    bool found = __________;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (patient[i].allergies[j] == "penicillin")
            {
                // display Patient’s name
                found = __________;
                break;
            }
        }
    }
    if (!found)
    {
        // display no patients allergic to penicillin
    }
}