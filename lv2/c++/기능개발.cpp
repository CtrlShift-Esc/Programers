//https://school.programmers.co.kr/learn/courses/30/lessons/42586
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    queue<int> que;
    que.push(0);
    
    while(!que.empty())
    {
        int idx = que.front();
        que.pop();        
        int completed = 0;
        for(int i = idx; i < progresses.size(); i++)
        {
            progresses[i] += speeds[i];
            
            if (progresses[i] < 100)
            {
                if (que.empty())
                    que.push(i);
                continue;
            }            
            if (!que.empty())
                continue;
            completed++;
        }
        if (completed > 0)
            answer.push_back(completed);
    }
        
    return answer;
}