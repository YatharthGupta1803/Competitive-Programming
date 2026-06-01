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
        if (arr[i] < 0)
        {
            arr[i] = arr[i] * (-1);
        }
    }
    sort(arr.begin(), arr.end());
    cout << arr[0];
}