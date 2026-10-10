#include <iostream>
using namespace std;
#include <vector>

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans = 0;
        for (int i = 0; i < n; i += k)
        {
            bool has_free_field = false;

            for (int j = i; j < i + k; ++j)
            {
                if (s[j] == '0')
                {
                    has_free_field = true;
                    break;
                }
            }

            if (!has_free_field)
                ++ans;
        }

        cout << ans << '\n';
    }

    return 0;
}
