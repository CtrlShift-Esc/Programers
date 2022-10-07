//https://school.programmers.co.kr/learn/courses/30/lessons/120815
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    while((answer*6)%n!=0)
    {
        answer++;
    }
    return answer;
}