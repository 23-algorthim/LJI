// 단어 정렬 #1181
/*
알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
    1. 길이가 짧은 것부터
    2. 길이가 같으면 사전 순으로
단, 중복된 단어는 하나만 남기고 제거해야 한다.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string s;
    vector<pair<int, string>> words;

    for (int i = 0; i < N; i++)
    {
        cin >> s;
        words.push_back({s.length(), s});
    }

    sort(words.begin(), words.end());

    cout << words[0].second << endl;

    for (int i = 1; i < N; i++)
    {
        if (words[i].second != words[i - 1].second)
        {
            cout << words[i].second << endl;
        }
    }

    return 0;
}