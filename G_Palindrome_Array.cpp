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

    int i = 0;
    int j = n - 1;

    while (i < j)
    {

        if (arr[i] == arr[j])
        {
            i++;
            j--;
            continue;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}