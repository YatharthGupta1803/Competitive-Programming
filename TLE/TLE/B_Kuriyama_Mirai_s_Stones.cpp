#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int main()
{

    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<long long> sortedpref;
    sortedpref = arr;
    sort(sortedpref.begin(), sortedpref.end());
    vector<long long> test(n);
    test = sortedpref;
    vector<long long> pref(n);
    pref[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + arr[i];
        sortedpref[i] += sortedpref[i - 1];
    }

    int k;
    cin >> k;
    while (k--)
    {
        int l, r, t;
        cin >> t >> l >> r;
        l--;
        r--;
        if (t == 1)
        {
            cout << pref[r] - pref[l] + arr[l] << endl;
        }
        else
        {
            cout << sortedpref[r] - sortedpref[l] + test[l] << endl;
        }
    }
}