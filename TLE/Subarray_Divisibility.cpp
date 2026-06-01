#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <map>

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<long long, long long> psum;
    psum[0]++;
    long long csum = 0;
    long long total = 0;
    for (int i = 0; i < n; i++)
    {
        csum += arr[i];
        int mod = (csum + n) % n;
        total += psum[mod];
        psum[mod]++;
    }
    cout << total;
}