#include <iostream>
using namespace std;
#include <vector>

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    int cost = 0;
    vector<int> socks;
    vector<int> lft(n + 1, 0);
    vector<int> rgt(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> socks[i];
        if (i <= l)
        {
            lft.push_back(socks[i]);
        }
        if (i > l)
        {
            rgt.push_back(socks[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (lft[i] == rgt[i])
        {
            lft[i] -= lft[i];
            rgt[i] -= rgt[i];
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}