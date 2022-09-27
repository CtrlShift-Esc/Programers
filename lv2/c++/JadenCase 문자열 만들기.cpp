//https://school.programmers.co.kr/learn/courses/30/lessons/12951
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    bool first = true;
    for(int i = 0; i < s.length(); i++)
    {
        if (first && s[i] != ' ')
        {
            if ('a' <= s[i] && s[i] <= 'z')
                answer += s[i] - 32;      
            else
                answer += s[i];
            first = false;
            continue;
        }
        if (s[i] == ' ')
            first = true;
        answer += s[i];
    }
    return answer;
}