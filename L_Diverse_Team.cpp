#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    set<int> st;
    vector<int> ans;
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        st.insert(arr[i]);
        if (st.size() > len)
        {
            ans.push_back(i + 1);
            len = st.size();
        }
    }
    if (ans.size() >= k)
    {
        cout << "YES" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << ans[i] << " ";
        }
    }
    else
    {
        cout << "NO";
    }
}