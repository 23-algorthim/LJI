#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

int N;
vector<pair<int, int>> v;
priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int s, t;
        cin >> s >> t;
        v.push_back({s, t});
    }
    sort(v.begin(), v.end());

    pq.push(v[0].second);
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].first >= pq.top())
        {
            pq.pop();
            pq.push(v[i].second);
        }
        else
        {
            pq.push(v[i].second);
        }
    }
    cout << pq.size();
}
