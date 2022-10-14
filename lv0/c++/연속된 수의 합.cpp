//https://school.programmers.co.kr/learn/courses/30/lessons/120923
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;    
    int s = total/num+(total%num!=0?1:0)-num/2;
    for(int i = 0; i < num; i++)
        answer.push_back(s++);
    return answer;
}