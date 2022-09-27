//https://school.programmers.co.kr/learn/courses/30/lessons/12973
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int solution(string s)
{
	int answer = 0;
    if (s.length() % 2 != 0)
        return 0;
	deque<char> dq;
    for(const char& c : s)
    {
        if (dq.empty() || dq.back() != c)
            dq.push_back(c);
        else
            dq.pop_back();
    }
    answer = dq.size() > 0 ? 0 : 1; 
	return answer;
}