#include <iostream>
using namespace std;

#include <vector>

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n + 1);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i >= (n / 2))
        {
            sum += arr[i];
        }
    }
    cout << sum;
}