#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
// 100 = (20, 40, 10, ...)
// 8-bits = 1 byte
// int = 4 bytes = 4 * 8 = 32 bits
// [ 0, 0, 0, 0, (0, 0, 0, 0), 0, 0, 0, 0]
// 0xAF51FA = 11489786
struct Point
{
    int x;
    int y;
} matrix[2];

int *p_matrix = (int *)matrix; // 4

void print_matrix()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "matrix[" << i << "].x: " << matrix[i].x << endl;
        cout << "matrix[" << i << "].y: " << matrix[i].y << endl;
    }
}

void print_pointer()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "pointer[" << i << "]: " << p_matrix[i] << endl;
    }
}

int main()
{
    // matrix = [{ x: 1, y: 2 }, { x: 3, y: 4 }];

    // matrix[0].x = 1;
    // matrix[0].y = 2;
    // matrix[1].x = 3;
    // matrix[1].y = 4;

    print_matrix();
    print_pointer();

    matrix[0].y = 5;
    matrix[1].x = 5;

    print_matrix();
    print_pointer();

    return 0;
}