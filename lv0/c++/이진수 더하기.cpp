//https://school.programmers.co.kr/learn/courses/30/lessons/120885
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    
    int n1 = 0, n2 = 0;
    reverse(bin1.begin(), bin1.end());
    reverse(bin2.begin(), bin2.end());
    for(int i = 0; i < bin1.length(); i++)
        n1+=bin1[i]=='1'?pow(2,i):0;
    for(int i = 0; i < bin2.length(); i++)
        n2+=bin2[i]=='1'?pow(2,i):0;
    int n=n1+n2;
    if (n==0)
        answer = "0";
    while(n!=0)
    {
        answer=to_string(n%2)+answer;
        n/=2;
    }
    return answer;
}