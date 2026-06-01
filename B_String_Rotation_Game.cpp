#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <vector>

void rotateString(string &s, int k)
{
    int n = s.length();
    k = k % n;
    reverse(s.begin(), s.end());
    reverse(s.begin(), s.begin() + k);
    reverse(s.begin() + k, s.end());
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int max_score = 0;
        int score = 0;

        for (int k = 0; k < n; k++)
        {
            string copy = s;

            rotateString(copy, k);
            score = 1;
            for (int i = 1; i < n; i++)
            {
                if (copy[i] != copy[i - 1])
                {
                    score++;
                }
            }
            max_score = max(max_score, score);
        }
        cout << max_score << endl;
    }
}