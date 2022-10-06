//https://school.programmers.co.kr/learn/courses/30/lessons/120908
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    auto idx = str1.find(str2);
    if (0<=idx&&idx<str1.length())
        answer = 1;
    else
        answer = 2;
    return answer;
}