#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> freq(k + 1, 0);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        freq[a]++;
    }

    int max_freq = 0;
    for (int i = 1; i <= k; i++)
    {
        if (freq[i] > max_freq)
        {
            max_freq = freq[i];
        }
    }

    int count = 0;
    for (int i = 1; i <= k; i++)
    {
        if (freq[i] >= max_freq - 1)
        {
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}