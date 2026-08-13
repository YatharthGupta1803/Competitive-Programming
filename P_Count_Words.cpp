#include <iostream>
using namespace std;

#include <string>
// cin only redas the first word wehn input via string, we have to rahter use getline(cin, s)

int main()
{

    string s;
    getline(cin, s);

    int count = 0;
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]) && !flag)
        {
            count++;
            flag = true;
        }

        if (!isalpha(s[i]))
        {
            flag = false;
        }
    }
    cout << count;
}