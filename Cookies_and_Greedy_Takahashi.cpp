#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<long long> s;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        s.insert(x);
    }

    long long pos = 0;
    long long ans = 0;

    while (!s.empty())
    {
        auto it = s.lower_bound(pos);

        long long next;

        if (it == s.end())
        {
            --it;
            next = *it;
        }
        else if (it == s.begin())
        {
            next = *it;
        }
        else
        {
            long long right = *it;
            long long left = *(--it);

            if (pos - left <= right - pos)
                next = left;
            else
                next = right;
        }

        ans += abs(next - pos);
        pos = next;
        s.erase(next);
    }

    cout << ans << '\n';
}
