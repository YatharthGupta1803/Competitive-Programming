#include <iostream>
using namespace std;

#include <vector>

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> pref(n);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    pref[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] += pref[i - 1] + arr[i];
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int s = abs(sum - pref[i]);
        int d = abs(s - pref[i]);

        if (d < ans)
        {
            ans = d;
        }
    }
    cout << ans;
}