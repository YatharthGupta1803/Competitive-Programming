#include <iostream>
#include <vector>
#include <map>
#include <cmath>

// Use the standard namespace
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> counts;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            counts[val]++;
        }

        if (counts.size() > 2)
        {

            cout << "No\n";
        }
        else if (counts.size() == 1)
        {

            cout << "Yes\n";
        }
        else
        {

            auto it = counts.begin();
            int count1 = it->second;
            it++;
            int count2 = it->second;

            if (abs(count1 - count2) <= 1)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
    return 0;
}