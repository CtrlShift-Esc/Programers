//https://school.programmers.co.kr/learn/courses/30/lessons/120869
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    for(const string& s : dic)
    {
        if (s.length() != spell.size())
            continue;        
        bool isCmp = true;
        for(int i = 0; i < spell.size(); i ++)
        {
            if (s.find(spell[i]) == string::npos)
            {
                isCmp = false;
                break;
            }
        }
        if (isCmp)
            return 1;
    }
    return answer;
}