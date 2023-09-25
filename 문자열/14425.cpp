// 문자열 집합 #14425

/*
총 N개의 문자열로 이루어진 집합 S가 주어진다.

입력으로 주어지는 M개의 문자열 중에서 집합 S에 포함되어 있는 것이 총 몇 개인지 구하는 프로그램을 작성하시오.
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int N, M;
    int count = 0;
    cin >> N >> M;
    map<string, bool> s;
    string word;

    for (int i = 0; i < N; i++)
    {
        cin >> word;
        s.insert(pair<string, bool>(word, true));
    }

    for (int j = 0; j < M; j++)
    {
        cin >> word;
        if (s[word] == true)
            count++;
    }

    cout << count;

    return 0;
}