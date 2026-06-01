#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> pre(n);
    pre[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
        // cout << pre[i] << " ";
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        cout << pre[r] - pre[l] + a[l] << endl;
    }
}