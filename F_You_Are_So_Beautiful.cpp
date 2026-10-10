#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <set>

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;
        vector<int> arr(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<long long, long long> mp;

        set<long long> fst, lst;

        for (long long i = 0; i < n; i++)
        {
            if (mp[arr[i]] == 0)
            {
                fst.insert(i);
            }
            mp[arr[i]]++;
        }
        mp.clear();
        for (long long i = n - 1; i >= 0; i--)
        {
            if (mp[arr[i]] == 0)
            {
                lst.insert(i);
            }
            mp[arr[i]]++;
        }
        long long ans = 0;

        for (long long i = 0; i < n; i++)
        {
            if (fst.find(i) != fst.end())
            {
                ans += lst.size();
                if (lst.find(i) != lst.end())
                {
                    ans--;
                }
            }
            if (lst.find(i) != lst.end())
            {
                lst.erase(i);
            }
        }

        map<long long, long long> som;
        for (auto el : arr)
        {
            som[el]++;
        }
        long long so = 0;
        for (auto el : som)
        {
            so += (el.second == 1);
        }

        cout << ans + so << endl;
    }
}