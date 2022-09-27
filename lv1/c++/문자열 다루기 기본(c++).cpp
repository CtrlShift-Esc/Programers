//https://school.programmers.co.kr/learn/courses/30/lessons/12918
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if (!(s.length() == 4 || s.length() == 6))
        return false;
    for(int i = 0; i < s.length(); i++)
    {
        if (!('0' <= s[i] && s[i] <= '9'))
            return false;
    }
    return answer;
}