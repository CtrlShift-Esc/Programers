//https://school.programmers.co.kr/learn/courses/30/lessons/86971
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int diff(int n, vector<vector<int>> graph, int source, int target)
{
    queue<int> dfs;
    vector<int> colors(n+1);
    dfs.push(source);
    colors[target] = 1;
    
    int cnt = 0;
    while(!dfs.empty())
    {
        int s = dfs.front();
        dfs.pop();
        for(auto t : graph[s])
        {            
            if (colors[t] == 0)
            {
                colors[t] = 1;
                cnt++;
                dfs.push(t);
            }
        }
        colors[s] = 1;
    }
    return cnt;   
}

int solution(int n, vector<vector<int>> wires) {
    vector<vector<int>> graph(n+1);
    for(auto w : wires)
    {
        graph[w[0]].push_back(w[1]);
        graph[w[1]].push_back(w[0]);      
    }
    
    int odd = n % 2;
        
    vector<int> v ;
    for(auto w : wires)
    {
        int a = diff(n, graph, w[0], w[1]);
        int b = diff(n, graph, w[1], w[0]);
        int d = a > b ? a - b : b - a;
        if (d == odd)
            return odd;
        v.push_back(d);
    }
    
    sort(v.begin(), v.end());
    
    int answer = v[0];
    return answer;
}