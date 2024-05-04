#include <iostream>
#include <limits>
using namespace std;

int main()
{
    long long number = numeric_limits<long long>::min();
    cout << number - 1 - 9223372036854775807;

    return 0;
}
