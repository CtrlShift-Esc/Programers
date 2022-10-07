//https://school.programmers.co.kr/learn/courses/30/lessons/120834
#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = to_string(age);
    int ret = 'a' - '0';
    for(int i = 0; i < answer.length(); i++)
    {
        answer[i]+=ret;
    }
    return answer;
}