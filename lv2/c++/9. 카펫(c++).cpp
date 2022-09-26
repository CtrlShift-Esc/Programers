//https://school.programmers.co.kr/learn/courses/30/lessons/42842
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int cell = brown + yellow;
    for(int i = 3; i < cell; i++)
    {
        if (cell % i == 0)
        {
            int x = cell / i;            
            int w = x > i ? x : i;
            int h = x > i ? i : x;
            
            if (brown != ((w * 2) + ((h - 2) * 2)))
                continue;
            
            answer.push_back(w);
            answer.push_back(h);
            break;
        }
    }
        
    
    return answer;
}