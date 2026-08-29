#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<long long> freq(101, 0);

    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    long long sum = 0;

    for (int i = 0; i <= 100; i++)
    {
        if (freq[i] % 2 == 0)
        {
            continue;
        }
        else
        {
            sum += i;
        }
    }
    cout << sum;
}