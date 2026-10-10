#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> freq(m + 1);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int ans = 0;
        int greater = 0;

        for (int x = m; x >= 1; x--)
        {
            int current = freq[x] + greater;

            if (2 * x <= m)
                current += freq[2 * x];

            ans = max(ans, current);

            greater += freq[x];
        }

        cout << ans << '\n';
    }

    return 0;
}