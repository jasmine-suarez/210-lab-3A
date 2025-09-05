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
void printRestaurant(Restaurant r);

int main()
{
    Restaurant r = createRestaurant();
    printRestaurant(r);

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

    return temp;
}

void printRestaurant(Restaurant r)
{
    cout << r.name << endl;
    cout << r.address << endl;
    cout << r.rating << endl;
    cout << r.avgPrice << endl;
    cout << r.isOpen << endl;
}