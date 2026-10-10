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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        long long counter = 1;
        long long ans = 1;
        for (int i = 1; i < n; i++)
        {

            if (arr[i] - arr[i - 1] <= k)
            {
                counter++;
            }
            else
            {
                counter = 1;
            }
            ans = max(ans, counter);
        }
        cout << n - ans << endl;
    }
    return 0;
}