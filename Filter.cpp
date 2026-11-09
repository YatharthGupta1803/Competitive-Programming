#include <iostream>
using namespace std;

#include <vector>

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> eve;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            eve.push_back(arr[i]);
        }
    }
    for (auto &i : eve)
    {
        cout << i << " ";
    }
}