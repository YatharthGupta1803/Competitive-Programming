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
        string s;
        cin >> s;
        long long count = 1;
        long long ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == s[i])
            {
                count++;
                ans = max(count, ans);
            }
            else
            {
                count = 1;
            }
        }
        cout << ans + 1 << endl;
    }
}