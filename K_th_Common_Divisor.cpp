#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;

    vector<int> arr;

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            arr.push_back(i);
        }
    }

    cout << arr[arr.size() - k] << endl;

    return 0;
}
