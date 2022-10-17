//https://school.programmers.co.kr/learn/courses/30/lessons/131128
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    unordered_map<char, int> m;
    bool isZero = true;
    for(const char& ch : X)
        m[ch]++;
    
    for(const char& ch : Y)
    {
        if (m[ch])
        {
            if (isZero && ch != '0')
                isZero = false;
            m[ch]--;
            answer += ch;
        }
    }
    
    sort(answer.begin(), answer.end(), greater<char>());
    if (answer.empty())
        answer = "-1";
    else if (isZero)
        answer = "0";
    
   
    return answer;
}