//https://school.programmers.co.kr/learn/courses/30/lessons/12948
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    for(int i = 0; i < phone_number.length() - 4; i++)
        answer += "*";
    phone_number.replace(0, phone_number.length() - 4, answer);
    answer = phone_number;
    return answer;
}