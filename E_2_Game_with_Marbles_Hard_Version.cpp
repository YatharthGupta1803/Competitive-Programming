#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n), b(n);

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans += a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            ans -= b[i];
        }

        vector<pair<ll, ll>> v;

        for (int i = 0; i < n; i++)
        {
            v.push_back({a[i], b[i]});
        }

        sort(v.begin(), v.end(), [](const auto &x, const auto &y)
             { return x.first + x.second > y.first + y.second; });

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                // Alice chooses this color
                ans += v[i].second - 1;
            }
            else
            {
                // Bob chooses this color
                ans -= v[i].first - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
