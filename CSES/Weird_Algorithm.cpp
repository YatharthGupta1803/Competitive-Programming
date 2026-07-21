#include <iostream>
using namespace std;
#include <vector>

void solve()
{
    long long n;
    cin >> n;
    cout << n << " ";
    vector<long long> arr;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            arr.push_back(n);
        }
        else
        {
            n = (n * 3) + 1;
            arr.push_back(n);
        }
    }
    for (long long i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}