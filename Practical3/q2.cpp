#include <iostream>
using namespace std;

int main(){
    struct Employee{
        char employeeID[5];
        char employeeName[21];
        char employeeDepartment[6];
    };

    Employee employee[4] = {
        {"E01","Alice Chin","R&D"},
        {"E02","John","IT"},
        {"E03","Vivian","HR"},
        {"E04","Alice Chin","IT"}
    };

    //search name
    char searchName[21];
    bool found = false;

    cout << "Enter an employee name to search: ";
    cin.getline(searchName,21);

    for(int i = 0; i < employee.employee.size(); i++){
        if(employee[i].employeeName == searchName){
            cout << "Employee found! \n--- Displaying employee details ---";
            cout << "Employee ID: " << Employee[i].employeeID;
            cout << "Employee Name: " << Employee[i].employeeName;
            cout << "Employee Department: " << Employee[i].employeeDepartment;
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Employee not found!";
    }

    return 0;

}