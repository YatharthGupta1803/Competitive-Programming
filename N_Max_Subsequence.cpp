#include <iostream>
using namespace std;
#include <set>

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    char temp = s[0];
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (temp == s[i])
        {
            continue;
        }
        else
        {
            temp = s[i];
            count++;
        }
    }
    cout << count;
}