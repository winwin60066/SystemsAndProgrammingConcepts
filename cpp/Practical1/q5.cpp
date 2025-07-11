#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// variables declaration here
vector<int> ratings;
// get ratings from user

cout << "Enter movie ratings (1 to 5) [0 to stop]: ";
cin >> input;

while (input != 0)
{
    if (input >= 1 && input <= 5)
    {
        input.push_back(ratings);
    }
    else
    {
        cout << "Invalid rating. Please enter rating between 1 to 5.";
    }
// get ratings from user
}
// if no ratings were entered, display “No ratings were entered” to the user
cout << "No ratings were entered.";

// calculate total and average
for (int r : ratings )
{
int sum += r;
if (r == 5)
{
// keep track how many 5 star ratings
}
}

double average = (double) sum / ratings.size();
double percent = (double) sum / ratings.size() * 100.0;
// display to the user
cout << fixed << setprecision(2);
