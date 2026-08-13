#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    a.erase(unique(a.begin(), a.end()), a.end());

    while (q--)
    {
        int x;
        cin >> x;

        int less = lower_bound(a.begin(), a.end(), x) - a.begin();

        int greater = a.end() - upper_bound(a.begin(), a.end(), x);

        cout << less << " " << greater << '\n';
    }

    return 0;
}