//https://school.programmers.co.kr/learn/courses/30/lessons/120844
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer(numbers);
    if (direction[0] == 'r')
    {
        int n = *(answer.end()-1);
        answer.pop_back();
        answer.insert(answer.begin(),n);
    }
    else
    {
        answer.push_back(answer[0]);
        answer.erase(answer.begin());
    }
    return answer;
}