//https://school.programmers.co.kr/learn/courses/30/lessons/120850
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i = 0; i < my_string.length(); i++)
    {
        char ch = my_string[i];
        if (ch < '0' || '9' < ch)
            continue;
        answer.push_back(atoi(&ch));
    }
    sort(answer.begin(), answer.end());
    return answer;
}