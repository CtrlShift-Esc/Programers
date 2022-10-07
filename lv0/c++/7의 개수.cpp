//https://school.programmers.co.kr/learn/courses/30/lessons/120912
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(int i = 0; i < array.size(); i++)
    {
        int n = array[i];
        while(n!=0)
        {
            answer+=n%10==7?1:0;
            n/=10;
        }
    }
    return answer;
}