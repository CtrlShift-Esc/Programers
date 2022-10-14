//https://school.programmers.co.kr/learn/courses/30/lessons/120871
#include <string>
#include <vector>

using namespace std;

bool is3x(int n)
{
    while(n!=0)
    {
        if (n%10==3)
            return true;
        n/=10;
    }
    return false;
}

int solution(int n) {
    int answer = 0;
    for(int i = 0; i < n; i++)
    {
        while(1)
        {
            answer++;
            if (answer%3==0 || is3x(answer))
                continue;
            else
                break;
        }
    }
    return answer;
}