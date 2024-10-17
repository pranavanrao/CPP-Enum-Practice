#include <iostream>

using namespace std;

enum Color {
    Red,
    Green,
    Blue
};

enum Directions {
    North = 1,
    East,
    South,
    West
};

enum DaysOfWeek {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    Color myColor = Green;
    Directions myDirection = East;
    DaysOfWeek today = Thursday;

    cout << "Selected color : " << myColor << endl;
    cout << "Selected Direction : " << myDirection << endl;

    if (today == Thursday) {
        cout << "Today is Thursday" << endl;
    }

    return 0;
}
