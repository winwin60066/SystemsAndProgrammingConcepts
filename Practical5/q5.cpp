#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void calculateBMI(float &bmi, float height, float weight, string &category)
{
    bmi = weight / (height * height);

    if (bmi < 18.4)
        category = "Underweight";
    else if (bmi < 25.0)
        category = "Normal";
    else if (bmi < 30.0)
        category = "Overweight";
    else
        category = "Obese";
}

void displayResult(float bmi, string &category)
{
    cout << fixed << setprecision(2);
    cout << "\nYour BMI: " << bmi << endl;
    cout << "Your health category: " << category << endl << endl;
}

int main()
{
    float weight, height, bmi;
    string category;

    cout << "Enter weight (kg): ";
    cin >> weight;

    cout << "Enter height (cm): ";
    cin >> height;

    height = height / 100.0;  // convert to meters

    calculateBMI(bmi, height, weight, category);
    displayResult(bmi, category);

    return 0;
}

