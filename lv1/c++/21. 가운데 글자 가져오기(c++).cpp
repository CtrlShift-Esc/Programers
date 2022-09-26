//https://school.programmers.co.kr/learn/courses/30/lessons/12903
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool isEven = s.length() % 2 == 0;
    int idx = s.length() / 2;
    if (isEven)
        answer += s[idx-1];
    answer += s[idx];
    return answer;
}