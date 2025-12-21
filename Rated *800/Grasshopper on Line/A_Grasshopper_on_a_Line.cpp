#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        if (x % k != 0)
        {
            cout << 1 << endl;
            cout << x << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << 1 << " " << x - 1 << endl;
        }
    }
}