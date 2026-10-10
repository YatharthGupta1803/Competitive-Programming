#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int N;
    cin >> N;

    vector<pair<long long, long long>> intervals(N);

    for (auto &[l, r] : intervals)
    {
        cin >> l >> r;

        if (l > r)
            swap(l, r);
    }

    sort(intervals.begin(), intervals.end());

    vector<pair<long long, long long>> ans;

    for (auto [l, r] : intervals)
    {
        if (ans.empty())
        {
            ans.push_back({l, r});
        }
        else
        {
            auto &[lastL, lastR] = ans.back();

            if (l <= lastR)
            {
                lastR = max(lastR, r);
            }
            else
            {
                ans.push_back({l, r});
            }
        }
    }

    for (auto [l, r] : ans)
    {
        cout << l << " " << r << '\n';
    }

    return 0;
}
