#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<long long> arr(n);
        int diff, maxdiff = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        maxdiff = arr[0];

        for (int i = 1; i < n; i++)
        {
            diff = arr[i] - arr[i - 1];
            if (diff > maxdiff)
            {
                maxdiff = diff;
            }
        }
        int dist = (x - arr[n - 1]) * 2;
        cout << max(maxdiff, dist) << endl;
    }
}