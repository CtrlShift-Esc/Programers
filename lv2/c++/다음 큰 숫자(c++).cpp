//https://school.programmers.co.kr/learn/courses/30/lessons/12911
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int decToB(int n)
{
    int r = 0;
    while(n != 0)
    {
        if (n%2)
            r++;
        n/=2;
    }
    return r;
}

int solution(int n) {
    int answer = 0;
    int base = decToB(n++);
    while(1)
    {
        if (base == decToB(n))
            break;
        n++;
    }
    answer = n;
    return answer;
}