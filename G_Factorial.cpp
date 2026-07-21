#include <iostream>
using namespace std;

long long factorial(long long n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}
void solve()
{
    long long n;
    cin >> n;
    cout << factorial(n) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}