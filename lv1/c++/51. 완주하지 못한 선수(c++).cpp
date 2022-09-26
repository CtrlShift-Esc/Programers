//https://school.programmers.co.kr/learn/courses/30/lessons/42576
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_map>


using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b)
{
    return a.second > b.second;
}

string solution(vector<string> participant, vector<string> completion) {    
    string answer = "";
    
    unordered_map<string, int> complete;
    for(const string& name : completion)
    {
        if (complete.end() == complete.find(name))
            complete.insert(make_pair(name, 1));
        else
            complete[name]++;
    }
    
    for(const string& name : participant)
    {
        if (complete.end() == complete.find(name))
        {
            answer = name;
            break;
        }        
        
        if (--complete[name] < 0)
        {
            answer = name;
            break;
        }
    }
    return answer;
}