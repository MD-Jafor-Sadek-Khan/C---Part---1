#include <iostream>

using namespace std;

int main()
{
    cout << "Farenheight: " << endl;
    double farenheight = 0;
    cin >> farenheight;
    farenheight = (farenheight - 32) / 1.8;

    cout << "Celceous: " << endl
         << farenheight << endl;

    return 0;
}
