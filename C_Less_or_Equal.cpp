#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Fast I/O to prevent TLE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Sort the array in ascending order
    sort(a.begin(), a.end());

    if (k == 0)
    {

        if (a[0] > 1)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    else
    {
        int ans = a[k - 1];

        if (k < n && a[k] == ans)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << ans << '\n';
        }
    }

    return 0;
}