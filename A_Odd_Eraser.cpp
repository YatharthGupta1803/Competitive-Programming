#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long first, last;

        cin >> first;

        last = first;

        for (int i = 1; i < n; i++)
            cin >> last;

        cout << gcd(first, last) << '\n';
    }

    return 0;
}