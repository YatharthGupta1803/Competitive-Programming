#include <iostream>
using namespace std;
#include <vector>

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
        long long ans = 0;
        long long count = 1;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] >= arr[i - 1])
            {
                count++;
            }
            else
            {
                ans += ((count * (count + 1)) / 2);
                count = 1;
            }
        }
        ans += count * (count + 1) / 2;

        cout << ans << endl;
    }
}