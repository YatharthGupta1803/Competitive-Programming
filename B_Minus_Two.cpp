#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int odd = 0;
        int mod4_0 = 0;
        int mod4_2 = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            if (x % 2 == 1)
                odd++;
            else if (x % 4 == 0)
                mod4_0++;
            else
                mod4_2++;
        }

        cout << max({odd, mod4_0, mod4_2}) << '\n';
    }

    return 0;
}
