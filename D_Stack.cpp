#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{

    int q;
    cin >> q;

    stack<int> st;

    while (q--)
    {
        string query;
        cin >> query;

        if (query == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if (query == "pop")
        {
            st.pop();
        }
        else if (query == "top")
        {
            cout << st.top() << '\n';
        }
    }

    return 0;
}