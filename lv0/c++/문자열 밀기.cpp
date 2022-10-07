//https://school.programmers.co.kr/learn/courses/30/lessons/120921
#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = -1;
    if (A.length() != B.length())
        return -1;
    if (A==B)
        return 0;
    for(int i = 1; i < A.length(); i++)
    {
        A = A[A.length()-1] + A.substr(0, A.length()-1);
        if (A == B)
        {
            answer = i;
            break;
        }
    }
    return answer;
}