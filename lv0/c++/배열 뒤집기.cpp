//https://school.programmers.co.kr/learn/courses/30/lessons/120821?language=cpp
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(num_list);    
    reverse(answer.begin(), answer.end());
    return answer;
}