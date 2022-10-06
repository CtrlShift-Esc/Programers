//https://school.programmers.co.kr/learn/courses/30/lessons/120830
#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = n*12000+(k-n/10)*2000;
    return answer;
}