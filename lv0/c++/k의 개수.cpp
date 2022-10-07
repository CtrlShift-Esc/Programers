//https://school.programmers.co.kr/learn/courses/30/lessons/120887
#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(int p = i; p <= j; p++)
    {
        int n = p;
        while(n!=0)
        {
            if (n%10==k)
                answer++;
            n/=10;
        }
    }
    return answer;
}