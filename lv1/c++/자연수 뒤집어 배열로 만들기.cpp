//https://school.programmers.co.kr/learn/courses/30/lessons/12932
#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string s = to_string(n);
    for(int i = s.length()-1; i >= 0; i--)
    {
        char ch = s[i];
        answer.push_back(atoi(&ch));
    }
    return answer;
}