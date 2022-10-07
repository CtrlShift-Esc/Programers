//https://school.programmers.co.kr/learn/courses/30/lessons/120896
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string solution(string s) {
    string answer="";
    map<char, int> m;
    for(int i = 0; i < s.length(); i++)
        m[s[i]]++;
    for(int i = 0; i < s.length(); i++)
    {
        if (m[s[i]] == 1)
            answer+=s[i];
    }
    sort(answer.begin(), answer.end());
    return answer;
}