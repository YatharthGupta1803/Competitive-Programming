#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n, s;
    cin >> n >> s;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<long long, long long> mp;
    long long sum = 0;
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        ans += mp[sum - s];
        if (sum == s)
            ans++;
        mp[sum]++;
    }
    cout << ans << endl;
}