#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    auto hex = [](int n, int d) {
        std::string s(d, '0');
        cout << "debug: " << s << endl;
        for (int i = d - 1; i >= 0; i--, n >>= 4)
        {
            cout << "i: " << i << endl;
            cout << "n: " << n << endl;

            s[i] = "0123456789ABCDEF"[n & 0xF];

            cout << "s: " << s << endl;
        }
        return s;
    };

    std::string teste = hex(100, 4);

    cout << "result: " << teste << endl;

    return 0;
}