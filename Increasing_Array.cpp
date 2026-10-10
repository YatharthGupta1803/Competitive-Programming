#include <iostream>
using namespace std;
#include <vector>
#include <climits>

int main()
{

    long long n;
    cin >> n;
    long long count = 0;

    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long last = INT_MIN;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] >= last)
        {
            last = arr[i];
        }
        else
        {
            count += last - arr[i];
        }
    }
    cout << count << endl;
}