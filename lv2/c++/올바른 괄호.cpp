//https://school.programmers.co.kr/learn/courses/30/lessons/12909
#include <string>
#include <iostream>
#include <queue>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    queue<char> que;
    for(int i = 0; i < s.length(); i++)
        que.push(s[i]);
    
    int cmp = 0;
    // category가 queue/stack잖아...?
    while(!que.empty())
    {
        char c = que.front();
        que.pop();
        if (c == '(')
            cmp++;
        else
            cmp--;
        
        if (cmp < 0)
            return false;
    }
    
    if (cmp != 0)
        return false;    

    return answer;
}