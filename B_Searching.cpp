#include <iostream>
using namespace std;
#include <vector>

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << i;
            temp = 1;
            return 0;
        }
    }
    if (temp == 0)
    {
        cout << -1;
    }
}