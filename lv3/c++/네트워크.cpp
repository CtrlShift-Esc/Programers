//https://school.programmers.co.kr/learn/courses/30/lessons/43162
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    vector<vector<int>> graph(n);
    
    for(int i =0; i < computers.size(); i++)
    {
        for(int j = 0; j < computers[i].size(); j++)
        {
            if (i == j)
                continue;
            if (computers[i][j])
            {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }
        
    vector<int> colors(n);
    for(int i =0; i < colors.size(); i++)
    {
        if (colors[i])
            continue;
        
        answer++;
        queue<int> que;
        que.push(i);
        while(!que.empty())
        {
            int s = que.front();
            que.pop();
            for(const int& t : graph[s])
            {
                if (!colors[t])
                {
                    colors[t] = 1;
                    que.push(t);
                }
            }
            colors[s] = 1;
        }
    }
    
    return answer;
}