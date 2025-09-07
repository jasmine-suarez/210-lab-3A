// COMSC-210 | Lab 3A | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
using namespace std;

struct Restaurant
{
    string name;
    string address;
    int rating;
    double avgPrice;
    bool isOpen;
};

Restaurant createRestaurant();
void printRestaurant(const Restaurant &r);

int main()
{
    Restaurant r1 = createRestaurant();
    Restaurant r2 = createRestaurant();
    Restaurant r3 = createRestaurant();
    Restaurant r4 = createRestaurant();
    Restaurant r5 = createRestaurant();

    printRestaurant(r1);
    printRestaurant(r2);
    printRestaurant(r3);
    printRestaurant(r4);
    printRestaurant(r5);

    return 0;
}

Restaurant createRestaurant()
{
    Restaurant temp;
    
    cout << "Enter restaurant name: ";
    getline(cin, temp.name);
    cout << "Enter restaurant address: ";
    getline(cin, temp.address);
    cout << "Enter rating (1-5): ";
    cin >> temp.rating;
    cout << "Enter average price: ";
    cin >> temp.avgPrice;
    cout << "Is the restaurant open? (1 = yes, 0 = no): ";
    cin >> temp.isOpen;
    cin.ignore();
    cout << endl;

    return temp;
}

void printRestaurant(const Restaurant &r)
{
    cout << endl;
    cout << "---------- Restaurant Information ----------" << endl;
    cout << "Name: " << r.name << endl;
    cout << "Address: " << r.address << endl;
    cout << "Rating: " << r.rating << endl;
    cout << "Average Price: $" << r.avgPrice << endl;
    cout << "Open now? ";
    if (r.isOpen)
        cout << "Yes";
    else
        cout << "No";
    cout << endl << endl;
}