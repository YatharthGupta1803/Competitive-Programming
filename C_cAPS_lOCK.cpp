#include <iostream>
using namespace std;

#include <string>
#include <algorithm>

// 97-122
// 65-90

int main()
{

    string s;
    cin >> s;
    int n = s.size();
    bool change = true;

    for (int i = 1; i < n; i++)
    {
        if (islower(s[i]))
        {
            change = false;
            break;
        }
    }
    if (change)
    {
        if (islower(s[0]))
        {
            s[0] = toupper(s[0]);
        }
        else
        {
            s[0] = tolower(s[0]);
        }

        for (int i = 1; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s;
}