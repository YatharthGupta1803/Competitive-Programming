#include <iostream>
#include <vector>
#include <climits>
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
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            int mx = INT_MIN;

            for (int j = i; j < n; j++)
            {
                mx = max(mx, arr[j]);
                cout << mx << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
