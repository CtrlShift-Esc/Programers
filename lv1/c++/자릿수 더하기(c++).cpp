//https://school.programmers.co.kr/learn/courses/30/lessons/12931
#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;    
    int v = 10;
    do
    {
        answer += (n%v) / (v/10);
        v *= 10;        
    }while(n/v > 0);
    answer += (n%v) / (v/10);

    return answer;
}