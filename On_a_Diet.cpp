#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    long long K;
    cin >> N >> M >> K;

    vector<long long> A(N);
    vector<bool> eaten(N, false);

    for (auto &x : A)
        cin >> x;

    long long sum = 0;

    for (int i = 0; i < N; i++)
    {
        // Remove the snack that is no longer in the last M days.
        if (i >= M && eaten[i - M])
        {
            sum -= A[i - M];
        }

        // Decide whether to eat today's snack.
        if (sum + A[i] <= K)
        {
            eaten[i] = true;
            sum += A[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << (eaten[i] ? "Yes" : "No") << '\n';
    }

    return 0;
}
