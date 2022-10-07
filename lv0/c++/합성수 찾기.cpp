//https://school.programmers.co.kr/learn/courses/30/lessons/120846
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 4; i <= n; i++)
    {
        int is = 0;
        for(int j = 1; j <= i; j++)
        {
            if (i%j==0)
                is++;
            if (is>2)
                break;
        }
        if (is>2)
            answer++;
    }
    return answer;
}