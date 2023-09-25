#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palindrome;
    while (1)
    {
        cin >> palindrome;
        int length = palindrome.size();

        if (palindrome == "0")
            break;
        else
        {
            bool isPalindrome = true;
            for (int i = 0; i < length / 2; i++)
            {
                if (palindrome[i] != palindrome[length - i - 1])
                {
                    isPalindrome = false;
                    break;
                }
            }

            if (isPalindrome)
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }
    return 0;
}