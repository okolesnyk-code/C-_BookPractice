#include "chapter4_exercise3.h"
#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};

struct Volume
{
    Distance length;
    Distance width;
    Distance height;
};

void chapter4_exercise3(){

    Volume room =
    {
        { 12, 6.0f },
        { 10, 3.5f },
        { 8,  2.0f }
    };

    float lengthFeet = room.length.feet + room.length.inches / 12.0f;
    float widthFeet = room.width.feet + room.width.inches / 12.0f;
    float heightFeet = room.height.feet + room.height.inches / 12.0f;

    float volume = lengthFeet * widthFeet * heightFeet;

    cout << "Room volume: " << volume << " cubic feet" << endl;


}
