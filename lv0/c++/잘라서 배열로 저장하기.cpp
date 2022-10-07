//https://school.programmers.co.kr/learn/courses/30/lessons/120913
#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    int size = my_str.length()/n+(my_str.length()%n>0?1:0);
    vector<string> answer(size);
    for(int i = 0; i < my_str.length(); i++)
        answer[i/n]+=my_str[i];
    return answer;
}