//https://school.programmers.co.kr/learn/courses/30/lessons/12940
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int tmp = n;
    if (n > m)
    {
        n = m;
        m = tmp;        
    }
    if (m%n == 0)
    {
        answer.push_back(n);
        answer.push_back(m);
    }
    else
    {
        int m1 = 0;
        for(int i = 1; i <= n; i++)
        {
            if (m%i == 0 && n%i == 0)
                m1 = i;
        }
        answer.push_back(m1);
        if (m1 == 1)
            answer.push_back(n*m);
        else
        {
            int tm = m1;
            while(tm % n != 0 || tm % m != 0)
            {
                tm += m1;
            }
            answer.push_back(tm);
        }
    }
    
    return answer;
}