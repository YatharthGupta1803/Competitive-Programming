#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<long long> pref(n + 1, 0);

    for (int i = 0; i < n; i++)
        pref[i + 1] = pref[i] + arr[i];

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        cout << pref[r] - pref[l - 1] << '\n';
    }
}
