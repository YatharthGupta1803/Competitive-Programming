#include <iostream>
using namespace std;
#include <vector>

void solve()
{
    int n;

    int ans = 0;
    cin >> n;
    int original = n;

    while (n > 0)
    {
        ans = ans * 10;
        ans += n % 10;
        n = n / 10;
    }
    if (ans == original)
    {
        cout << ans << endl;
        cout << "YES";
    }
    else
    {
        cout << ans << endl;
        cout << "NO";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}