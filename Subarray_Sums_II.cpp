#include <iostream>
#include <vector>
using namespace std;
#include <map>

void solve()
{
    long long n;
    cin >> n;
    long long x;
    cin >> x;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<long long, long long> psum_count;
    psum_count[0] = 1;
    long long cursum = 0;
    long long total = 0;

    for (int i = 0; i < n; i++)
    {
        cursum += arr[i];

        total += psum_count[cursum - x];

        psum_count[cursum]++;
    }

    cout << total << endl;
}

int main()
{
    solve();
}
