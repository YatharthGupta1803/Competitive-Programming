#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d < b)
        {
            cout << -1 << endl;
            continue;
        }

        long long diff = d - b;
        long long new_x = a + diff;

        if (new_x < c)
        {
            cout << -1 << endl;
        }
        else
        {
            long long moves = diff + (new_x - c);
            cout << moves << endl;
        }
    }
}
