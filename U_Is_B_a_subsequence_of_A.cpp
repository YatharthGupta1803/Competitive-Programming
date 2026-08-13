#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n), arr2(k);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < k; i++)
        cin >> arr2[i];

    if (k > n)
    {
        cout << "NO";
        return 0;
    }

    int i = 0, j = 0;

    while (i < n && j < k)
    {
        if (arr[i] == arr2[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    if (j == k)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}