#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count_0 = 0;
    int count_1 = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            count_0++;
        }
        else
        {
            count_1++;
        }
    }

    if (count_1 % 2 == 0)
    {
        cout << count_1 << "\n";
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                cout << (i + 1) << " ";
            }
        }
        cout << "\n";
    }
    else if (count_0 % 2 != 0)
    {
        cout << count_0 << "\n";
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                cout << (i + 1) << " ";
            }
        }
        cout << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }

    return 0;
}