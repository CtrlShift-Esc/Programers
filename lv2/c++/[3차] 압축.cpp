//https://school.programmers.co.kr/learn/courses/30/lessons/17684
#include <string>
#include <vector>
#include <unordered_map>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    unordered_map<string, int> dic;
    for(int i = 0; i < 26; i++)
    {
        string s("");
        s += 'A'+i;
        dic[s] = i+1;
    }
    
    deque<char> dq(msg.begin(), msg.end());
    string s("");
	while (!dq.empty())
	{
		if (dic[s + dq.front()])
		{
			s += dq.front();
			dq.pop_front();
			if (dq.empty())
				answer.push_back(dic[s]);
			continue;
		}
		int ret = dic[s];
		if (!dq.empty())
			dic[s + dq.front()] = dic.size();
		answer.push_back(ret);
		s = "";
	}      
    
    return answer;
}