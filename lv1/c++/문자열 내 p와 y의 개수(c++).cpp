//https://school.programmers.co.kr/learn/courses/30/lessons/12916
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    bool answer = true;    
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    int n = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'p')
            n++;
        else if (s[i] == 'y')
            n--;
    }
    answer = n == 0 ? true : false;
    return answer;
}