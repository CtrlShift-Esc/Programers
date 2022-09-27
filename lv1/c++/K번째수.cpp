//https://school.programmers.co.kr/learn/courses/30/lessons/42748
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {    
    vector<int> answer;
    
    for(auto cmd : commands)
    {   
        vector<int> vt(array.begin() + --cmd[0], array.begin() + cmd[1]);
        sort(vt.begin(), vt.end());        
        answer.push_back(vt[--cmd[2]]);
    }
    
    return answer;
}