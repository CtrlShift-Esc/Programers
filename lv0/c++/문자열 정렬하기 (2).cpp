//https://school.programmers.co.kr/learn/courses/30/lessons/120911
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer(my_string);
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
    sort(answer.begin(), answer.end());
    return answer;
}