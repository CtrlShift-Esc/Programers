//https://school.programmers.co.kr/learn/courses/30/lessons/120585
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for(int i = 0; i < array.size(); i++)
        answer += array[i] > height ? 1 : 0;
    return answer;
}