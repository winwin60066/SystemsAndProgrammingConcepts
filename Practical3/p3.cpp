#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Supplier {
    string name;
    string contact;
};

struct Product {
    int id;
    string name;
    float price;
    int qty;
    Supplier supplierInfo;
};

int main() {
    // Initialize the products array with some test data
    Product products[6] = {
        {1, "Apple", 2.50, 50, {"Supplier A", "123-456-7890"}},
        {2, "Banana", 1.20, 60, {"Supplier B", "123-456-7891"}},
        {3, "Orange", 3.00, 7, {"Supplier C", "123-456-7892"}},
        {4, "Mango", 2.00, 18, {"Supplier D", "123-456-7893"}},
        {5, "Pineapple", 4.50, 29, {"Supplier E", "123-456-7894"}},
        {6, "Grapes", 3.20, 10, {"Supplier F", "123-456-7895"}}
    };

    // Variables to store user input
    int productID;
    int purchaseQty;

    while (true) {
        // Get product ID from the user
        cout << "\nEnter a product ID (or 9999 to exit): ";
        cin >> productID;

        if (productID == 9999) {
            cout << "Exiting the purchase process.\n";
            break;
        }

        bool found = false;

        // Loop through the products array to find the product
        for (int i = 0; i < 6; i++) {
            if (products[i].id == productID) {
                found = true;

                // Get quantity from the user
                cout << "Enter quantity to purchase: ";
                cin >> purchaseQty;

                // Check if enough stock is available
                if (products[i].qty >= purchaseQty) {
                    // Deduct quantity from the stock
                    products[i].qty -= purchaseQty;

                    // Calculate the total payment
                    float total = purchaseQty * products[i].price;

                    // Display purchased product and total price
                    cout << "Product purchased: " << products[i].name << "\nTotal price: RM" << fixed << setprecision(2) << total << endl;

                    // Check for low stock
                    if (products[i].qty < 10) {
                        cout << "[Warning] (Product ID: " << products[i].id << ") " << products[i].name << " is low stock, remaining quantity is " << products[i].qty << endl;
                    }

                    // End the purchase and continue for next product
                    cout << "\nThank you for your purchase!\n";
                } else {
                    // If stock is insufficient
                    cout << "(Product ID: " << products[i].id << ") " << products[i].name << " is OUT OF STOCK!!" << endl;
                }

                break;
            }
        }

        // If product not found
        if (!found) {
            cout << "Product NOT FOUND!! Please enter a valid product ID.\n";
        }
    }

    return 0;
}
