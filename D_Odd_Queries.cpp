#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> prefix(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            prefix[i] = prefix[i - 1] + x;
        }

        long long totalSum = prefix[n];

        while (q--)
        {
            int l, r;
            long long k;

            cin >> l >> r >> k;

            long long rangeSum = prefix[r] - prefix[l - 1];
            long long count = r - l + 1;

            long long newSum = totalSum - rangeSum + count * k;

            if (newSum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
