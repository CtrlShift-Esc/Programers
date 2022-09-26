//https://school.programmers.co.kr/learn/courses/30/lessons/12914
#include <string>
#include <vector>
#include <iostream>
using namespace std;

long long solution(int n) {
	long long answer = 0;
    vector<int> vt(n+1, 0);
    vt[0] = 0;
    vt[1] = 1;
    vt[2] = 2;    
    for(int i = 3; i <= n; i++)
        vt[i] = (vt[i-2] + vt[i-1])%1234567;
    answer = vt[n];
	return answer;
}