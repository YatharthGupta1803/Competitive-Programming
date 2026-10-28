
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;

        string s;
        cin >> s;

        string ans = "";
        char digit = char('0' + d);
        bool inserted = false;

        for (int i = 0; i < n; i++)
        {
            if (!inserted && s[i] - '0' < d)
            {
                ans += digit;
                inserted = true;
            }

            ans += s[i];
        }

        if (!inserted)
        {
            ans += digit;
        }

        cout << ans << '\n';
    }

    return 0;
}
