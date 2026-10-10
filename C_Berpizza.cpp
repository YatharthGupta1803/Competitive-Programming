#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    // {money, -customer_id}
    priority_queue<pair<int, int>> pq;

    // served[id] = true if customer has already been served
    vector<bool> served(q + 1, false);

    // IDs are assigned consecutively.
    int customerCount = 0;
    int firstUnserved = 1;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int m;
            cin >> m;

            ++customerCount;

            // Larger money first.
            // For equal money, larger -id means smaller id.
            pq.push({m, -customerCount});
        }
        else if (type == 2)
        {
            // Find the first customer who hasn't been served.
            while (served[firstUnserved])
            {
                ++firstUnserved;
            }

            cout << firstUnserved << ' ';
            served[firstUnserved] = true;
            ++firstUnserved;
        }
        else
        { // type == 3
            // Remove already-served customers from the heap.
            while (served[-pq.top().second])
            {
                pq.pop();
            }

            int id = -pq.top().second;
            pq.pop();

            cout << id << ' ';
            served[id] = true;
        }
    }

    return 0;
}