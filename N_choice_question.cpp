#include <iostream>
using namespace std;

#include <vector>

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> arr(n);
    int sum = a + b;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == sum)
        {
            cout << i + 1 << endl;
            break;
        }
    }
}