#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // uint8_t stk = 0x00;
    int i = 0;
    int stkp = 0;

    i++;
    stkp = i++;

    cout << "stkp: " << stkp << endl;
    cout << "i: " << i << endl;

    // i = stk;
    // cout << "stk: " << i << endl;
    // stk--;
    // i = stk;
    // cout << "stk: " << i << endl;

    return 0;
}