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
        long long y, x;
        cin >> y >> x;

        long long n = max(y, x);
        long long ans;

        if (x == n)
        {
            // Right side
            if (n % 2 == 1)
                ans = n * n - y + 1;
            else
                ans = (n - 1) * (n - 1) + y;
        }
        else
        {
            // Bottom side
            if (n % 2 == 1)
                ans = (n - 1) * (n - 1) + x;
            else
                ans = n * n - x + 1;
        }

        cout << ans << '\n';
    }
}