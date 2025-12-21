#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;

    vector<long long> arr(n + 1), pref(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pref[i] = pref[i - 1] + arr[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << '\n';
    }
}
