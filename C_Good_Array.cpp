#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans(n);
    ans[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        ans[i] = arr[i] + ans[i - 1];
    }
    for (auto &b : ans)
    {
    }
}