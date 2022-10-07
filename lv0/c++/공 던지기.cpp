//https://school.programmers.co.kr/learn/courses/30/lessons/120843
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    deque<int> q(numbers.begin(), numbers.end());
    while(--k!=0)
    {
        for(int i = 0; i < 2; i++)
        {
            q.push_back(q.front());
            q.pop_front();
        }
        answer = q.front();
    }
    return answer;
}