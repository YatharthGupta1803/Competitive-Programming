#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, long long> freq;
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        ans += i - freq[x];
        freq[x]++;
    }

    cout << ans << endl;

    return 0;
}