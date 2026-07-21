#include <iostream>
using namespace std;

int main()
{

    string b;
    string c;
    cin >> c;
    b = c;
    s = c;

    c[0] = b[1];
    c[1] = b[2];
    c[2] = b[0];

    cout << c;
}