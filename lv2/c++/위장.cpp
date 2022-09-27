//https://school.programmers.co.kr/learn/courses/30/lessons/42578
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    map<string, int> m;    
    for(auto dress : clothes)
    {
        m[dress[1]]++;
    }

    
    for(auto dress : m)
    {
        answer *= (dress.second + 1);
    }

    
    return answer - 1;
}