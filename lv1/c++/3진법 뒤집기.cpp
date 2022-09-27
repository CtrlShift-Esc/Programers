//https://school.programmers.co.kr/learn/courses/30/lessons/68935
#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;    
    int d = n;
    string s("");
    while(d != 0)
    {
        s = to_string(d%3) + s;
        d = d/3;        
    }
    
    for(int i = s.length()-1; i >= 0; i--)    
    {
        char ch = s[i];
        if (i != 0) 
            answer += atoi(&ch) * pow(3, i);
        else 
            answer += atoi(&ch);
    }
    
    return answer;
}