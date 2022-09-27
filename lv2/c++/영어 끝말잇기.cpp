//https://school.programmers.co.kr/learn/courses/30/lessons/12981
#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    deque<int> dq;
    vector<int> turn(n+1, 0);
    unordered_map<string, int> dup;
    for(int i = 1; i <= n; i++)
        dq.push_back(i);
    
    char last = '0';
    for(const string& s: words)
    {        
        int p = dq.front();
        dq.pop_front();
        dq.push_back(p);
        turn[p]++;
        
        if (dup[s] || (last != '0' && last != s[0]))
        {
            answer = {p, turn[p]};
            break;
        }
        else 
            dup[s] = 1;
        
        last = s[s.length()-1];
    }
     
    if(answer.size() == 0)
        answer = {0,0};

    return answer;
}