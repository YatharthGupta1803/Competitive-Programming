#include <iostream>
using namespace std;
#include <vector>
#include <set>

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> a(n);
        set<int> st;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        if (st.size() < n || n % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}