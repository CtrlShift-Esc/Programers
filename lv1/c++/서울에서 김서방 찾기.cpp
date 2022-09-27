//https://school.programmers.co.kr/learn/courses/30/lessons/12919
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int i = 0;
    for(; i < seoul.size(); i++)
    {
        auto idx = seoul[i].find("Kim");
        if (0<=idx && idx<=20)
            break;
    }
    answer += "김서방은 " + to_string(i) + "에 있다";
    return answer;
}