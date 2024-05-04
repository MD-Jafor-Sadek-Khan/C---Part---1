#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << left;
    cout << setw(10) << "Course" << setw(10) << "Students" << endl;
    cout << left;
    cout << setw(10) << "C++" << setw(10) << right << "100" << endl;
    cout << setw(10) << "Javascript" << setw(10) << right << "50";
    return 0;
}
