
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string a;
        cin >> a;

        string ans = "";
        int sum = a[0] - '0';

        for (int i = 1; i < n; i++)
        {
            if (a[i] == '0')
            {
                ans += '+';
            }
            else if (sum > 0)
            {
                ans += '-';
                sum--;
            }
            else
            {
                ans += '+';
                sum++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
