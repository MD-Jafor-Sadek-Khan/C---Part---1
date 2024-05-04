#include <iostream>
using namespace std;

int main()
{
    string names[3];

    cout << "First Name: ";
    cin >> names[0];

    cout << "Middle Name: ";
    cin >> names[1];

    cout << "Last Name: ";
    cin >> names[2];

    cout << "First Name: " << names[0];

    return 0;
}
