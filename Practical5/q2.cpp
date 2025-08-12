#include <iostream>
#include <iomanip>
using namespace std;

string checkout(double unitPrice, int qty, double &subtotal, double &discount, double &finalTotal) {
    subtotal = unitPrice * qty;

    if (qty >= 5) {
        discount = subtotal * 0.1;
        finalTotal = subtotal - discount;
        return " (Discount is applied.))";
        
    } else {
        discount = 0;
        finalTotal = subtotal;
        return " (Discount is not applied.)";
    }
    return 0;
}

int main() {
    string productCode;
    double unitPrice;
    int qty;
    double subtotal, discount, finalTotal;

    cout << "Enter product code: ";
    cin >> productCode;

    cout << "Enter unit price (RM): ";
    cin >> unitPrice;

    cout << "Enter quantity to purchase: ";
    cin >> qty;

    string message = checkout(unitPrice, qty, subtotal, discount, finalTotal);

    cout << "\n88 Supermarket\n----------------" << endl;\
    cout << "Subtotal (RM): " << fixed << setprecision(2) << subtotal << endl;
    cout << "Discount (RM): " << fixed << setprecision(2) << discount << message << endl;
    cout << "Final Total (RM): " << fixed << setprecision(2) << finalTotal << endl;

    return 0;
}
