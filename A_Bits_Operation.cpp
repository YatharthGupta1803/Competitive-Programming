#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    long long n;
    cin >> q >> n;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 4)
        {
            n = ~n;
        }
        else
        {
            long long x;
            cin >> x;

            if (type == 1)
                n = n | x;
            else if (type == 2)
                n = n & x;
            else if (type == 3)
                n = n ^ x;
        }

        cout << n << '\n';
    }

    return 0;
}