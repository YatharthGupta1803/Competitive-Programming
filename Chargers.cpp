#include <iostream>
using namespace std;
#include <set>

int main()
{

    int Q;
    long long V;
    cin >> Q >> V;

    multiset<long long> batteries;

    while (Q--)
    {
        int type;
        long long t;
        cin >> type >> t;

        if (type == 1)
        {
            long long w;
            cin >> w;

            batteries.insert(w - t);
        }
        else
        {
            if (batteries.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            auto it = prev(batteries.end());
            long long key = *it;

            if (key + t >= V)
            {
                cout << V << '\n';
            }
            else
            {
                cout << key + t << '\n';
            }

            batteries.erase(it);
        }
    }

    return 0;
}
