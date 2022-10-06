//https://school.programmers.co.kr/learn/courses/30/lessons/120814
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = n/7+(n%7>0?1:0);
    return answer;
}