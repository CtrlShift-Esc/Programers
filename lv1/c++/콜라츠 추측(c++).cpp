//https://school.programmers.co.kr/learn/courses/30/lessons/12943
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;   
    long long n = num;
    while (n != 1)
    {
        n = n % 2 == 0 ? n/2 : n*3+1;        
        if (answer++ > 500)
            return -1;
    }
    return answer;
}