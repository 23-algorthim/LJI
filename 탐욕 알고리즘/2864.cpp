#include <iostream>
#include <string>
using namespace std;

string num1, num2 = "";
int minSum = 0;
int maxSum = 0;

int main()
{
    cin >> num1 >> num2;

    for (int j = 0; j < num1.size(); j++)
    {
        if (num1[j] == '6')
            num1[j] = '5';
    }

    for (int j = 0; j < num2.size(); j++)
    {
        if (num2[j] == '6')
            num2[j] = '5';
    }

    minSum = stoi(num1) + stoi(num2);

    for (int j = 0; j < num1.size(); j++)
    {
        if (num1[j] == '5')
            num1[j] = '6';
    }

    for (int j = 0; j < num2.size(); j++)
    {
        if (num2[j] == '5')
            num2[j] = '6';
    }

    maxSum = stoi(num1) + stoi(num2);

    cout << minSum << " " << maxSum;

    return 0;
}