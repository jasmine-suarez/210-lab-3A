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

int main()
{
    Restaurant test = createRestaurant();
    cout << test.name << endl;
    return 0;
}

Restaurant createRestaurant()
{
    Restaurant temp;
    
    cout << "Enter restaurant name: ";
    getline(cin, temp.name);

    return temp;
}