#include <iostream>
using namespace std;
#include <string>

int main()
{

    string s;
    cin >> s;
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'v')
        {
            count++;
        }
        else
        {
            count += 2;
        }
    }
    cout << count;
}