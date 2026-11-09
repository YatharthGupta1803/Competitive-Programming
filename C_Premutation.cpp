
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n - 1));
    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> a[i][j];
        }
        freq[a[i][0]]++;
    }

    int first = -1;

    // Find the element appearing n-1 times
    // as the first element of the sequences.
    for (int x = 1; x <= n; x++)
    {
        if (freq[x] == n - 1)
        {
            first = x;
            break;
        }
    }

    cout << first << " ";

    // Find the sequence that starts with
    // an element different from first.
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] != first)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cout << a[i][j] << " ";
            }
            break;
        }
    }

    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
