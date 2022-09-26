//https://school.programmers.co.kr/learn/courses/30/lessons/76502
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int solution(string s) {
    int answer = 0;
    map<char, int> dup;
    for(int i = 0; i < s.length(); i++)
        dup[s[i]]++;
    if (dup['['] != dup[']'] || dup['('] != dup[')'] || dup['{'] != dup['}'])
        return 0;
    
    dup = {{'[', 0}, {']', 3}, {'{', 1}, {'}', 4}, {'(', 2}, {')', 5}};
    deque<char> dq(s.begin(), s.end());
    for(int i = 0; i < s.length(); i++)
    {
        vector<int> vt(3,0);
        bool fail = false;
        deque<char> q;
        for(auto itr = dq.begin(); itr != dq.end(); itr++)
        {            
            if (q.empty() && dup[(*itr)] > 2)
            {
                fail = true;
                break;
            }            
         
            if (dup[(*itr)] <= 2)
                q.push_back((*itr));
            else if (dup[(*itr)] - dup[q.back()] != 3)
            {
                fail = true;
                break;
            }
            else
                q.pop_back();
        }
        if (!fail)
            answer++;
        dq.push_back(dq.front());
        dq.pop_front();
    }
    return answer;
}