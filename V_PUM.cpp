#include <iostream>
using namespace std;

int main()
{

    long long n;
    cin >> n;

    long long count = n * 4;
    for (int i = 1; i < count + 1; i++)
    {
        if (i % 4 == 0)
        {
            cout << "PUM" << endl;
        }
        else
        {
            cout << i << " ";
        }
    }
}