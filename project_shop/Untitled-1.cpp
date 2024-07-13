#include <iostream>
#include <vector>

using namespace std;

// Struct to represent menu items
struct MenuItem {
    string name;
    double price;
};

// Function to display the menu
void printMenu(const vector<MenuItem>& menu) {
    cout << "Menu:\n";
    cout << "Sr. No.\tItem\tPrice\n";
    for (size_t i = 0; i < menu.size(); i++) {
        cout << i + 1 << "\t" << menu[i].name << "\t" << menu[i].price << endl;
    }
}

int main() {
    // Shop name and menu
    string shopName = "Your Shop";
    vector<MenuItem> menu = {
        {"Item 1", 10.0},
        {"Item 2", 15.0},
        {"Item 3", 20.0}
    };

    // Prompt the user to enter their name
    string userName;
    cout << "Welcome to " << shopName << "!\n";
    cout << "Please enter your name: ";
    getline(cin, userName);

    // Prompt the user to enter their phone number
    string phoneNumber;
    while (true) {
        cout << "Please enter your 10-digit phone number: ";
        cin>>phoneNumber;
        if (phoneNumber.length() == 10) {
            break;
        } else {
            cout << "Invalid phone number. Please enter a 10-digit number.\n";
        }
    }

    // Display the menu
    printMenu(menu);

    // Allow the customer to select items
    vector<MenuItem> selectedItems;
    char choice;
    do {
        size_t itemIndex;
        cout << "Enter the Sr. No. of the item you want to order: ";
        cin >> itemIndex;
        if (itemIndex >= 1 && itemIndex <= menu.size()) {
            selectedItems.push_back(menu[itemIndex - 1]);
            cout << "Item added to your order.\n";
        } else {
            cout << "Invalid item selection.\n";
        }

        cout << "Do you want to order another item? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Generate the bill
    double totalAmount = 0.0;
    cout << "\nYour Bill:\n";
    cout << "Sr. No.\tItem\tPrice\tQuantity\tTotal\n";
    for (size_t i = 0; i < selectedItems.size(); i++) {
        double itemPrice = selectedItems[i].price;
        totalAmount += itemPrice;
        cout << i + 1 << "\t" << selectedItems[i].name << "\t" << itemPrice << "\t1\t" << itemPrice << endl;
    }

    // Calculate GST and CGST
    double gst = 0.18 * totalAmount;
    double cgst = gst / 2;
    totalAmount += gst;

    cout << "GST (18%): " << gst << endl;
    cout << "CGST (9%): " << cgst << endl;

    cout << "Total Amount (including tax): " << totalAmount << endl;
    
    cout << "Thank you, " << userName << "! Your order is complete. Please visit again.\n";

    return 0;
}