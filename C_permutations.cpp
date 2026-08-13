#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

int main()
{

    long long n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    while (k--)
    {
        string k;
        int a;
        cin >> k;
        if (k == "prev_permutation")
        {
            cin >> a;

            for (int i = 0; i < a; i++)
            {
                prev_permutation(s.begin(), s.end());
            }
            cout << s << endl;
        }
        else
        {
            cin >> a;

            for (int i = 0; i < a; i++)
            {

                next_permutation(s.begin(), s.end());
            }
            cout << s << endl;
        }
    }
}