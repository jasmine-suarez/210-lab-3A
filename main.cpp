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
    const int NUM_RESTAURANTS = 5;
    Restaurant restaurants[NUM_RESTAURANTS];
    
    for (int i = 0; i < NUM_RESTAURANTS; i++)
    {
        cout << "Enter Info for Restaurant " << (i + 1) << ":" << endl;
        restaurants[i] = createRestaurant();
    }

    for (int i = 0; i < NUM_RESTAURANTS; i++)
    {
        printRestaurant(restaurants[i]);
    }

    return 0;
}

// createRestaurant() creats a temporary struct, recieves, and returns input.
// arguments: none
// returns: Restaurant struct with user input
Restaurant createRestaurant()
{
    Restaurant temp;
    
    cout << "Enter restaurant name: ";
    getline(cin, temp.name);
    cout << "Enter restaurant address: ";
    getline(cin, temp.address);
    
    do
    {
        cout << "Enter rating (1-5): ";
        cin >> temp.rating;
    } while (temp.rating < 1 || temp.rating > 5);

    do
    {
        cout << "Enter average price: ";
        cin >> temp.avgPrice;
    } while (temp.avgPrice < 0);
    
    cout << "Is the restaurant open? (1 = yes, 0 = no): ";
    cin >> temp.isOpen;
    cout << endl;

    return temp;
}

// printRestaurant() prints attributes of a Restaurant struct.
// arguments: const Restaurant &r
// returns: void
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