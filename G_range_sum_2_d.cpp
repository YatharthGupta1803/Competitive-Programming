#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;

    vector<vector<long long>> v(n, vector<long long>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    vector<vector<long long>> pref(n, vector<long long>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            pref[i][j] = v[i][j];

            if (i > 0)
                pref[i][j] += pref[i - 1][j];

            if (j > 0)
                pref[i][j] += pref[i][j - 1];

            if (i > 0 && j > 0)
                pref[i][j] -= pref[i - 1][j - 1];
        }
    }

    while (k--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1--;
        y1--;
        x2--;
        y2--;

        long long ans = pref[x2][y2];

        if (x1 > 0)
            ans -= pref[x1 - 1][y2];

        if (y1 > 0)
            ans -= pref[x2][y1 - 1];

        if (x1 > 0 && y1 > 0)
            ans += pref[x1 - 1][y1 - 1];

        cout << ans << endl;
    }
}