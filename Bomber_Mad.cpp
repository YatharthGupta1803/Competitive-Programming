#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H, W, K;
    cin >> H >> W >> K;

    vector<string> S(H);
    for (auto &s : S)
        cin >> s;

    // Does each row/column contain a bomb?
    vector<bool> rowBomb(H, false);
    vector<bool> colBomb(W, false);

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            if (S[i][j] == '#')
            {
                rowBomb[i] = true;
                colBomb[j] = true;
            }
        }
    }

    // dist = minimum distance to a safe empty cell.
    // -1 means unvisited.
    vector<int> dist(H * W, -1);

    queue<int> q;

    // Add all safe cells as BFS sources.
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            if (S[i][j] == '.' &&
                !rowBomb[i] &&
                !colBomb[j])
            {

                int id = i * W + j;
                dist[id] = 0;
                q.push(id);
            }
        }
    }

    const int di[] = {-1, 1, 0, 0};
    const int dj[] = {0, 0, -1, 1};

    int answer = 0;

    while (!q.empty())
    {
        int id = q.front();
        q.pop();

        int i = id / W;
        int j = id % W;

        int d = dist[id];

        // This cell can reach a safe cell in at most K moves.
        ++answer;

        // Don't go beyond distance K.
        if (d == K)
            continue;

        for (int dir = 0; dir < 4; ++dir)
        {
            int ni = i + di[dir];
            int nj = j + dj[dir];

            if (ni < 0 || ni >= H || nj < 0 || nj >= W)
                continue;

            // Can't move onto a bomb.
            if (S[ni][nj] == '#')
                continue;

            int nid = ni * W + nj;

            // Already reached.
            if (dist[nid] != -1)
                continue;

            dist[nid] = d + 1;
            q.push(nid);
        }
    }

    cout << answer << '\n';

    return 0;
}
