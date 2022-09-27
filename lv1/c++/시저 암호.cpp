//https://school.programmers.co.kr/learn/courses/30/lessons/12926
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) 
{
    string answer = s;
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            continue;

        answer[i] += n;
        if (s[i] <= 'Z' && s[i] + n > 'Z')
            answer[i] -= 26;
        else if ('a' <= s[i] && s[i] + n > 'z')
            answer[i] -= 26;
    } 
    return answer;
}
