#include <iostream>
#include <iomanip>
using namespace std;


double calculateInterest(double balance, double annualRate, int months)
{
    // Calculate monthly rate
    double monthlyRate = annualRate / (12 * 100);

    // Calculate the interest
    double interest = balance * monthlyRate * months;

    // Return the interest
    return interest;
}

int main()
{
    // Variable declarations
    double balance, annualRate;
    int months;

    // Get credit card balance from user
    cout << "Enter credit card balance due: RM ";
    cin >> balance;

    // Get annual interest rate from user
    cout << "Enter annual interest rate ( % ): ";
    cin >> annualRate;

    // Get number of months from user
    cout << "Enter number of months overdue: ";
    cin >> months;

    // Calculate interest and display it
    double interest = calculateInterest(balance, annualRate, months);
    cout << "Interest charged: RM " << fixed << setprecision(2) << interest << endl;

    return 0;
}