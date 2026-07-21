#include <iostream>
using namespace std;
#include <iomanip>
void solve()
{
    string n;
    cin >> n;
    string shuffle = {n[0], n[2], n[4], n[3], n[1]};
    long long val = stoi(shuffle);

    long long ans = 1;
    for (int i = 0; i < 5; ++i)
    {
        ans = (ans * val) % 100000;
    }
    cout << setw(5) << setfill('0') << ans << "\n"; // if the number does not have leading zeroes eg : agar number ke paas 00053 hua toh it will not print 53
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();

    return 0;
}