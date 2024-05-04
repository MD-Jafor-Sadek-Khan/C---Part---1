#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    srand(time(0));
    const short maxValue = 6;
    const short minValue = 1;
    short diceOne = (rand() % (maxValue - minValue + 1)) + minValue;
    short diceTwo = (rand() % (maxValue - minValue + 1)) + minValue;

    std::cout << diceOne << std::endl
              << diceTwo;

    return 0;
}
