#include <iostream>
using namespace std;
#include <vector>

int main()
{

    int n, q;
    cin >> n >> q;
    vector<int> red(n + 1);
    vector<int> yellow(n + 1);
    while (q--)
    {
        int a, b;

        cin >> a >> b;
        if (a == 1)
        {
            yellow[b]++;
        }
        else if (a == 2)
        {
            red[b]++;
        }
        else
        {

            if (red[b] >= 1 || yellow[b] >= 2)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}