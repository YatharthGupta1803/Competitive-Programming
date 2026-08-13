#include <iostream>

using namespace std;

#include <string>

void findd(string &s, string b)
{
    int pos = s.find(b);
    int pos1 = s.find("=", pos + 1);
    int pos2 = s.find('&', pos1 + 1);

    cout << s.substr(pos, pos1 - pos) << ": " << s.substr(pos1 + 1, pos2 - pos1 - 1) << endl;
}
int main()
{

    string s;
    cin >> s;

    findd(s, "username");
    findd(s, "pwd");
    findd(s, "profile");
    findd(s, "role");
    findd(s, "key");
}