#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= a)
            {
                arr[i] = a - 1;
            }
            sum += arr[i];
        }
        sum += b;
        cout << sum << endl;
    }
}