#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);

        for (auto &x : a)
            cin >> x;

        for (auto &x : b)
            cin >> x;

        if (a[0] + n >= b[0] + m)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }

    return 0;
}