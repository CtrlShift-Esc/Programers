//https://school.programmers.co.kr/learn/courses/30/lessons/87390
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    int s1 = left/n+1;
    int s2 = left%n+1;
    int e1 = right/n+1;
    int e2 = right%n+1;
    
    for(int i = s1; i <= e1; i++)
    {
        int d = i;
        for(int j = 1; j <= n; j++)
        {   
            d--;
            if (i == s1 && j < s2)
                continue;
            if (i == e1 && j > e2)
                break;
            
            if (d >= 0)
                answer.push_back(i);
            else
                answer.push_back(j);                
        }
    }
    
    return answer;
}