#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    if (a + b == 9)
    {
        cout << "Nine";
        return 0;
    }
    if (a - b == 9)
    {
        cout << "Nine";
        return 0;
    }
    if (a * b == 9)
    {
        cout << "Nine";
        return 0;
    }
    if (a == 9 * b)
    {
        cout << "Nine";
        return 0;
    }

    cout << "Nein";
}