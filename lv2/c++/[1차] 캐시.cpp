//https://school.programmers.co.kr/learn/courses/30/lessons/17680
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    if (cacheSize == 0)
        return cities.size()*5;
    deque<string> dq;
    for(const string& s : cities)
    {
        string c(s);
        transform(c.begin(), c.end(), c.begin(), ::tolower);
        auto itr = find(dq.begin(), dq.end(), c);
        if (itr != dq.end())
        {
            dq.erase(itr);          
            dq.push_back(c);
            answer += 1;
        }
        else
        {
            if (dq.size() == cacheSize)
                dq.pop_front();
            dq.push_back(c);
            answer += 5;
        }
    }
    return answer;
}