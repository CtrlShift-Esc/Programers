//https://school.programmers.co.kr/learn/courses/30/lessons/120841
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    if (0 < dot[0])
    {
        if (0 < dot[1])
            answer = 1;
        else
            answer = 4;
    }
    else
    {
        if (0 < dot[1])
            answer = 2;
        else
            answer = 3;
    }
    return answer;
}