//https://school.programmers.co.kr/learn/courses/30/lessons/49189
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    vector<vector<int>> graph(n+1);
    for(auto e : edge)
    {
        graph[e[0]].push_back(e[1]);
        graph[e[1]].push_back(e[0]);
    }
    
    vector<int> colors(n+1, -1);
    queue<int> que;
    que.push(1);
    colors[1] = 1;
    
    while(!que.empty())
    {
        int s = que.front();
        que.pop();
        for(auto t : graph[s])
        {
            if (colors[t] < 0)
            {
                colors[t] = colors[s] + 1;
                que.push(t);
            }
        }
    }

    sort(colors.begin(), colors.end(), greater<int>());
    int max = colors[0];
    for(auto m : colors)
    {
        if (m != max)
            break;
        answer++;
    }
    
    return answer;
}