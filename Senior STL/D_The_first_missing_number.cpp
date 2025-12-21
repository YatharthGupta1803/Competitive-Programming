#include <iostream>
using namespace std;
#include <set>

int main()
{
    int n, m;
    cin >> n >> m;
    set<long long> st;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.insert(x);
    }
    for (int i = -m; i < m; i++)
    {
        if (st.count(i) == 0)
        {
            cout << i << endl;
            break;
        }
    }
}