//https://school.programmers.co.kr/learn/courses/30/lessons/12935
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = *min_element(arr.begin(), arr.end());
    auto itr = find(arr.begin(), arr.end(), min);
    arr.erase(itr);
    if (arr.size() == 0)
        arr.push_back(-1);
    answer = arr;
    return answer;
}