#include <iostream>
using namespace std;

// Struct to represent menu items
struct MenuItem {
    string name;
    double price;
};

// Function to display the menu
void printMenu(const MenuItem menu[], size_t size) {
    cout << "Menu:\n";
    cout << "Sr. No.\tItem\tPrice\n";
    for (size_t i = 0; i < size; i++) {
        cout << i + 1 << "\t" << menu[i].name << "\t" << menu[i].price << endl;
    }
}

int main() {
    // Shop name and menu
    string shopName = "Dwarkadhis Resturant";
    MenuItem menu[] = {
        {"Pizza", 150.0},
        {"Burger", 110.0},
        {"Mexican", 120.0},
        {"Dhosa", 140.0},
        {"Momos", 145.0},
        {"Candy", 40.0}
    };
    size_t menuSize = sizeof(menu) / sizeof(menu[0]);

    // Prompt the user to enter their name
    string userName;
    cout<<"--------------------------------------------------------------\n";
    cout << "Welcome to " << shopName << "!\n";
    cout<<"--------------------------------------------------------------\n";
    cout << "Please enter your name: ";
    getline(cin, userName);

    // Prompt the user to enter their phone number
    string phoneNumber;
    while (true) {
        cout << "Please enter your phone number: ";
        getline(cin, phoneNumber);
        if (phoneNumber.length() == 10) {
            break;
        } else {
            cout << "Invalid phone number. Please enter a 10-digit number.\n";
        }
    }

    // Display the menu
    cout<<"--------------------------------------------------------------\n";
    printMenu(menu, menuSize);

    // Allow the customer to select items
    MenuItem selectedItems[menuSize];
    size_t itemCount = 0;
    char choice;
    do {
        size_t itemIndex;
        cout<<"--------------------------------------------------------------\n";
        cout << "Enter your order number: ";
        cin >> itemIndex;
        if (itemIndex >= 1 && itemIndex <= menuSize) {
            selectedItems[itemCount++] = menu[itemIndex - 1];
            cout << "Item added to your order.\n";
        } else {
            cout << "Invalid item selection.\n";
        }
        cout<<"--------------------------------------------------------------\n";
        cout << "Do you want to order another item? (y/n): ";
        cin >> choice;
        cout<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n";
    } while (choice == 'y' || choice == 'Y');

    // Generate the bill
    double totalAmount = 0.0;
    cout<<"Name: "<<userName<<"\t\t\t"<<"Phone_number: "<<phoneNumber;
    cout << "\nYour Bill:\n";
    cout << "Sr. No.\tItem\tPrice\tQuantity\tTotal\n";
    cout<<"--------------------------------------------------------------\n";
    for (size_t i = 0; i < itemCount; i++) {
        double itemPrice = selectedItems[i].price;
        totalAmount += itemPrice;
        cout << i + 1 << "\t" << selectedItems[i].name << "\t" << itemPrice << "\t1\t" << itemPrice << endl;
    }

    // Calculate GST and CGST
    double gst = 0.18 * totalAmount;
    double cgst = gst / 2;
    totalAmount += gst;
    cout<<"--------------------------------------------------------------\n";
    cout << "GST (18%): " << gst << endl;
    cout << "CGST (9%): " << cgst << endl;

    cout << "Total Amount (including tax): " << totalAmount << endl;
    cout<<"--------------------------------------------------------------\n";
    cout << "Thank you, " << userName << "! Your order is complete. Please visit again.\n";
    cout<<"--------------------------------------------------------------\n";
    return 0;
}