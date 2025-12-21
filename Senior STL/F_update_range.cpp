#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<long long> arr(n + 2);
    vector<long long> diff(n + 3);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    while (m--)
    {
        int l, r;
        long long val;
        cin >> l >> r >> val;

        diff[l] += val;
        diff[r + 1] -= val;
    }

    long long add = 0;
    for (int i = 1; i <= n; i++)
    {
        add += diff[i];
        arr[i] += add;
    }

    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
}
