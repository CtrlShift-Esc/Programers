//https://school.programmers.co.kr/learn/courses/30/lessons/120888
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(string my_string) {
    string answer = "";
    unordered_map<char, bool> m;
    for(int i = 0; i < my_string.length(); i++)
    {
        char ch = my_string[i];
        if (!m[ch])
        {
            answer += ch;
            m[ch]=!m[ch];
        }
    }
    return answer;
}