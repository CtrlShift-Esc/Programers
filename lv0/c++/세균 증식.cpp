//https://school.programmers.co.kr/learn/courses/30/lessons/120910
#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int answer = n;
    for(int i = 0; i < t; i++)
        answer*=2;
    return answer;
}