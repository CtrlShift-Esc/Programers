//https://school.programmers.co.kr/learn/courses/30/lessons/120818
#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = price;
    if (500000 <= price)
        answer*=0.8;
    else if (300000 <= price)
        answer*=0.9;
    else if (100000 <= price)
        answer*=0.95;
    return answer;
}