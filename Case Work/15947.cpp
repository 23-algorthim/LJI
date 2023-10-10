#include <iostream>
using namespace std;

/*
baby sukhwan tururu turu
very cute tururu turu
in bed tururu turu
baby sukhwan
*/

int main()
{
    int N;
    cin >> N;
    N--;

    string song[14] = {"baby", "sukhwan", "tururu", "turu", "very", "cute", "tururu", "turu", "in", "bed", "tururu", "turu", "baby", "sukhwan"};

    int position = N % 14;
    int verse = N / 14;

    if (song[position] == "tururu")
    {
        if (verse >= 3)
            cout << "tu+ru*" << verse + 2;
        else
        {
            cout << "tururu";
            for (int i = 1; i <= verse; i++)
                cout << "ru";
        }
    }
    else if (song[position] == "turu")
    {
        if (verse >= 4)
        {
            cout << "tu+ru*" << verse + 1;
        }
        else
        {
            cout << "turu";
            for (int i = 1; i <= verse; i++)
                cout << "ru";
        }
    }
    else
    {
        cout << song[position];
    }

    return 0;
}
