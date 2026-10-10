#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    long long k;
    cin >> n >> k;

    vector<pair<long long, int>> citizens(n);
    vector<long long> ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> citizens[i].first;
        citizens[i].second = i;
    }

    long long base = k / n;
    long long rem = k % n;

    for (int i = 0; i < n; i++)
    {
        ans[i] = base;
    }

    sort(citizens.begin(), citizens.end());

    for (int i = 0; i < rem; i++)
    {
        ans[citizens[i].second]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << '\n';
    }

    return 0;
}