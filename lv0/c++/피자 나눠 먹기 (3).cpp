//https://school.programmers.co.kr/learn/courses/30/lessons/120816
#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = n/slice + (n%slice>0?1:0);
    return answer;
}