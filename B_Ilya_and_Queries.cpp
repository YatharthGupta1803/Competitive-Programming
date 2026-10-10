#include <iostream>
using namespace std;

#include <vector>

int main()
{

    string s;
    cin >> s;

    long long n = s.size();
    vector<long long> arr(n + 1, 0);

    for (long long i = 1; i < n; i++)
    {
        arr[i + 1] = (s[i] == s[i - 1]);
    }
    vector<long long> pref(n + 1, 0);

    pref[0] = arr[0];

    for (long long i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + arr[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l] << endl;
    }
}