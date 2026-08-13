#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<long long> ans(n, -1);
    stack<long long> st;

    for (int i = n - 1; i >= 0; i--)
    {

        if (st.empty())
        {
            st.push(i);
            continue;
        }
        else
        {
            while (!st.empty() && arr[st.top()] <= arr[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                ans[i] = st.top();
            }
            st.push(i);
        }
    }

    long long q;
    cin >> q;

    while (q--)
    {
        long long x;
        cin >> x;

        if (ans[x - 1] == -1)
            cout << -1 << '\n';
        else
        {
            cout << ans[x - 1] + 1 << '\n';
        }
    }
}