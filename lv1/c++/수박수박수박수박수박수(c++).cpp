//https://school.programmers.co.kr/learn/courses/30/lessons/12922
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    for(int i = 0; i < n; i++)
        answer = i % 2 == 0 ? answer + "수" : answer + "박";
    return answer;
}