//https://school.programmers.co.kr/learn/courses/30/lessons/92335
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    string r("");
    while(n!=0)
    {
        r = to_string(n%k) + r;
        n/=k;
    }
    cout << r;
    
    stringstream ss(r);
    string out;
    while(getline(ss, out, '0'))
    {
        if (out.empty() || out == "1")
            continue;
        long n = stol(out);
        bool prime = true;        
        for(long i = 2; i*i <= n; i++)
        {
            if (n%i == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
            answer++;
    }
    
    return answer;
}