#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;

    map<string, int> mp;
    set<string> st;

    while (n--)
    {
        string s;
        cin >> s;
        mp[s.substr(3, 3)]++;
    }

    while (m--)
    {
        string t;
        cin >> t;
        st.insert(t);
    }

    for (auto t : st)
    {
        count += mp[t];
    }

    cout << count;
}