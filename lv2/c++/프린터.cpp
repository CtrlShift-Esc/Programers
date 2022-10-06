//https://school.programmers.co.kr/learn/courses/30/lessons/42587
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
        
    queue<pair<int, int>> printer;    
    for(int i = 0; i < priorities.size(); i++)
        printer.push(make_pair(i, priorities[i]));    
    
    sort(priorities.begin(), priorities.end(), greater<int>());    
    
    int idx = 0;
    while(!printer.empty())
    {
        auto print = printer.front();
        printer.pop();
        
        if (priorities[idx] != print.second)
        {
            printer.push(print);
            continue;
        }
               
        idx++;
        if(print.first == location)
            break;
    }
    answer = priorities.size() - printer.size();
    return answer;
}