#include <iostream>
using namespace std;
#include <vector>

itn main()
{
    int n, c;
    cin >> n >> c;

    vector<int> start(n), end(n), cost(n);

    for (int i = 0; i < n; i++)
    {
        cin >> start[i] >> end[i] >> cost[i];
    }
}