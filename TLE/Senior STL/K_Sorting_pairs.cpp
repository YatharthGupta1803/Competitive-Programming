#include <iostream>
using namespace std;

#include <vector>

bool cmp(pair<string, int> &p1, pair<string, int> &p2)
{
    if (p1.second > p2.second)
    {
        return true;
    }
    else if (p1.second == p2.second)
    {
        if (p1.first < p2.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;

    vector<pair<string, int>> v;
    for (int i = 0; i < n; i++)
    {
        string x;
        int j;
        cin >> x >> j;
        v.push_back({x, j});
    }

    sort(v.begin(), v.end(), cmp);

    for (auto x : v)
    {
        cout << x.first << ' ' << x.second << endl;
    }
}