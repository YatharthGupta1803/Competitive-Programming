#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        vector<long long> sword(n);
        vector<long long> power(n);

        for (int i = 0; i < n; i++)
        {
            cin >> sword[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> power[i];
        }

        sort(sword.begin(), sword.end());
        vector<long long> strike(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            strike[i + 1] = strike[i] + power[i];
        }

        long long points = 0;

        for (int i = 0; i < n; i++)
        {
            long long x = sword[i];
            long long balance_swords = n - i;
            auto it = upper_bound(strike.begin(), strike.end(), balance_swords);
            long long levels_completed = it - strike.begin() - 1;
            long long current_score = x * levels_completed;
            points = max(points, current_score);
        }

        cout << points << endl;
    }
}