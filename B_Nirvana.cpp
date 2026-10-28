#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    int d = n.size();

    long long prefix[11];
    prefix[0] = 1;

    for (int i = 0; i < d; ++i)
        prefix[i + 1] = prefix[i] * (n[i] - '0');

    long long ans = 1;

    // Largest number with d - 1 digits: 999...999
    for (int i = 1; i < d; ++i)
        ans *= 9;

    // Decrease one digit and maximize the suffix
    for (int i = 0; i < d; ++i)
    {
        if (n[i] == '0')
            continue;

        long long cur = prefix[i] * (n[i] - '0' - 1);

        for (int j = i + 1; j < d; ++j)
            cur *= 9;

        ans = max(ans, cur);
    }
    long long original = 1;
    for (char c : n)
        original *= (c - '0');

    ans = max(ans, original);
    cout << ans << '\n';
    return 0;
}