
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string pi = "314159265358979323846264338327";

    int t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;

        int ans = 0;

        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] == pi[i])
                ans++;
            else
                break;
        }

        cout << ans << '\n';
    }

    return 0;
}
