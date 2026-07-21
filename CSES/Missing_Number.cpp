#include <iostream>
using namespace std;
#include <vector>

long long sum(long long n)
{
    return n * (n + 1) / 2;
}

void solve()
{
    long long n;
    cin >> n;
    long long maxx = sum(n);
    vector<long long> arr(n);
    long long df = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        df += arr[i];
    }
    cout << (maxx - df) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}