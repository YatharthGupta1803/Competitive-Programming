
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int mn = arr[0];
        int mx = arr[n - 1];

        long long ans = 0;

        if (mn == mx)
        {
            ans = 1LL * n * (n - 1);
        }
        else
        {
            int cntMin = 0;
            int cntMax = 0;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == mn)
                    cntMin++;

                if (arr[i] == mx)
                    cntMax++;
            }

            ans = 2LL * cntMin * cntMax;
        }

        cout << ans << endl;
    }

    return 0;
}
