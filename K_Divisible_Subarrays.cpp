#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    long long ans = 0;
    long long rem = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        rem = (rem + x) % k;

        if (rem == 0)
            ++ans;
    }

    cout << ans << '\n';
}
