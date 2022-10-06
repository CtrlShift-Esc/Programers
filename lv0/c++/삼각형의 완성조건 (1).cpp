//https://school.programmers.co.kr/learn/courses/30/lessons/120889
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 1;
    sort(sides.begin(), sides.end());
    if (sides[0]+sides[1]<=sides[2])
        answer = 2;    
    return answer;
}