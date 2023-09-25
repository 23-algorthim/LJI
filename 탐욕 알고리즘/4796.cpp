#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    while (1)
    {
        int l, p, v;

        cin >> l >> p >> v;

        if (l == 0 && p == 0 && v == 0)
            break;

        int days = v / p;

        int last = v % p;

        if (l < last)
            last = l;

        cout << "Case " << i << ": " << days * l + last << endl;

        i++;
    }

    return 0;
}