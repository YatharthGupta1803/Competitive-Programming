#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int K;
    cin >> K;

    long long ans = 0;
    vector<long long> f(K + 1);

    for (int d = K; d >= 1; d--)
    {
        long long n = K / d;

        f[d] = n * n * n;

        for (int multiple = 2 * d; multiple <= K; multiple += d)
        {
            f[d] -= f[multiple];
        }

        // All triples whose gcd is exactly d contribute d.
        ans += d * f[d];
    }

    cout << ans << '\n';
}
