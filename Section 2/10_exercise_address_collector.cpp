#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Street: ";
    string street;
    getline(cin, street);

    cout << "Enter city: ";
    string city;
    getline(cin, city);

    cout << "Enter state: ";
    string state;
    getline(cin, state);

    cout << "Enter zipcode: ";
    string zipCode;
    getline(cin, zipCode);

    cout << zipCode << endl
         << city << ", " << state << ", " << zipCode;

    return 0;
}
