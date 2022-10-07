//https://school.programmers.co.kr/learn/courses/30/lessons/120848
#include <string>
#include <vector>

using namespace std;

int factorial(const int& n)
{
    int ret = 1;
    for(int i = 1; i <= n; i++)
        ret*=i;
    return ret;
}

int solution(int n) {
    int answer = 0;
    for(int i = 1; i <= 10; i++)
    {        
        int ret = factorial(i);
        if (n<=factorial(i))
        {
            answer = i;
            if (ret != n)
                answer-=1;            
            break;
        }
    }
    return answer;
}