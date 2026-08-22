#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        set<char> st;

        // First letters of ordinary words
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            st.insert(s[0] - 'a' + 'A');
        }

        vector<string> a(m);

        for (int i = 0; i < m; i++)
            cin >> a[i];

        vector<bool> used(m, false);

        // Keep creating abbreviations whenever possible
        for (int cnt = 0; cnt < m; cnt++)
        {
            bool found = false;

            for (int i = 0; i < m; i++)
            {
                if (used[i])
                    continue;

                bool possible = true;

                for (char c : a[i])
                {
                    if (!st.count(c))
                    {
                        possible = false;
                        break;
                    }
                }

                if (possible)
                {
                    used[i] = true;
                    st.insert(a[i][0]);
                    found = true;
                }
            }

            if (!found)
                break;
        }

        bool ok = true;

        for (int i = 0; i < m; i++)
        {
            if (!used[i])
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}