//https://school.programmers.co.kr/learn/courses/30/lessons/120909
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    double ret = sqrt(n);
    if (ret - (int)ret > 0)
        answer = 2;
    else
        answer = 1;

    return answer;
}