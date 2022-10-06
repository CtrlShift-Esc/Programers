//https://school.programmers.co.kr/learn/courses/30/lessons/120813
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 1; i <= n; i+=2)
        answer.push_back(i);
    return answer;
}