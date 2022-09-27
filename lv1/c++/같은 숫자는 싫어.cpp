//https://school.programmers.co.kr/learn/courses/30/lessons/12906
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    queue<int> que;
    for(auto a : arr)
        que.push(a);
    int old = -1;    
    // category가 queue/stack잖아...?
    while(!que.empty())
    {
        int a = que.front();
        que.pop();
        if (old != a)
            answer.push_back(a);            
        old = a;
    }
    return answer;
}