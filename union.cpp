#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

union Control
{
    struct
    {
        int x : 4; // LSB
        int y : 4; // MSB
    };

    int i;
};

int main()
{
    Control control;
    control.i = 0;

    control.x = 0b0100;
    control.y = 0b0001;

    cout << "x: " << control.x << endl;
    cout << "y: " << control.y << endl;
    cout << "i: " << control.i << endl;

    return 0;
}