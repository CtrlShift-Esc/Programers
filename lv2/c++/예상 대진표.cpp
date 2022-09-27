//https://school.programmers.co.kr/learn/courses/30/lessons/12985
#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    n/=2;
    while(n-- != 0)
    {        
        if (b%2==0 && b-a ==1)
            break;
        if (a%2==0 && a-b ==1)
            break;
        if (b%2 == 1)
            b++;
        if (a%2 == 1)
            a++;
        a/=2;
        b/=2;
        answer++;
    }
    
    return answer;
}