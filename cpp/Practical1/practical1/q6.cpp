#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector<double> temps = { 30.5, 32.0, 29.8, 31.2, 33.1, 30.0, 28.4 };

    double sum = 0;
    double maxTemp = temps[0];
    double minTemp = temps[0];

    for (double t : temps) {
        sum += t;
        if (t > maxTemp) {
            maxTemp = t;
        }
        if (t < minTemp) {
            minTemp = t;
        }
    }

    double avg = sum / temps.size();

    // Display results with 1 decimal place
    cout << fixed << setprecision(1);
    cout << "Highest Temperature: " << maxTemp << " C " << endl;
    cout << "Lowest Temperature: " << minTemp << " C " << endl;
    cout << "Average Temperature: " << avg << " C " << endl;

    return 0;
}
