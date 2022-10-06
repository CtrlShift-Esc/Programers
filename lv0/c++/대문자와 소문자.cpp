//https://school.programmers.co.kr/learn/courses/30/lessons/120893
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i = 0; i < my_string.length(); i++)
        answer += my_string[i] <= 'Z' ? ::tolower(my_string[i]) : ::toupper(my_string[i]);
    return answer;
}