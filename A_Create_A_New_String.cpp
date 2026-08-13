#include <iostream>
using namespace std;
#include <string>

int main()
{
    string k, m;
    getline(cin, k);
    getline(cin, m);

    cout << k.size() << ' ' << m.size() << endl;
    cout << k << ' ' << m;
}