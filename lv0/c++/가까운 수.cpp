//https://school.programmers.co.kr/learn/courses/30/lessons/120890
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    sort(array.begin(), array.end());
    int answer = array[0];
    for(int i = 1; i < array.size(); i++)
    {        
        answer=array[i];
        if (n<=answer)
        {
            if (n-array[i-1] <= answer-n)
                answer = array[i-1];            
            break;
        }
    }
    return answer;
}