//https://school.programmers.co.kr/learn/courses/30/lessons/86051
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> dp(10, 0);
    for(int i = 0; i < numbers.size(); i++)
        dp[numbers[i]] = 1;
    for(int i = 0; i < dp.size(); i++)
        answer += !dp[i] ? i : 0;
    return answer;
}