//https://school.programmers.co.kr/learn/courses/30/lessons/120583
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    for(int i = 0; i < array.size(); i++)
        answer+=array[i]==n?1:0;
    return answer;
}