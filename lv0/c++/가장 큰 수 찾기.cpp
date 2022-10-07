//https://school.programmers.co.kr/learn/courses/30/lessons/120899
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    answer.push_back(*max_element(array.begin(), array.end()));
    answer.push_back(distance(array.begin(), find(array.begin(), array.end(), answer[0])));
    return answer;
}