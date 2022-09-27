//https://school.programmers.co.kr/learn/courses/30/lessons/12947
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int n = 0;
    int tmpX = x;
    while(tmpX >0)
    {
        n+= tmpX%10;
        tmpX/=10;
    }
    answer = x % n == 0 ? true : false;
        
    return answer;
}