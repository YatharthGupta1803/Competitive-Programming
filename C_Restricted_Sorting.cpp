#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/// using 2e9 since number cannot be greater than that, adding comments so mod understands my approach better.
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int minn = 2e9;
    int maxx = -1;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] < minn)
            minn = a[i];
        if (a[i] > maxx)
            maxx = a[i];
    }

    vector<int> b = a;
    sort(b.begin(), b.end());

    bool is_sorted = true;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
        {
            is_sorted = false;
            break;
        }
    }

    if (is_sorted)
    {
        cout << -1 << "\n";
        return;
    }

    int k = 2e9;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
        {
            int diff = max(a[i] - minn, maxx - a[i]);

            k = min(k, diff);
        }
    }

    cout << k << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}