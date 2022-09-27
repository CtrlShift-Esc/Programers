//https://school.programmers.co.kr/learn/courses/30/lessons/12924
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if (n == 1)
        return 1;
    int answer = 0;
    int c = n/2 + n%2;
    int idx = 0;
    while(idx++ <= c)
    {
        int sum = 0;
        for(int i = idx; i <= c; i++)
        {
            sum += i;
            if (sum >= n)
            {
                if (sum == n)
                    answer++;
                break;
            }            
        }        
    }
    return ++answer;
}