//https://school.programmers.co.kr/learn/courses/30/lessons/92334
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    unordered_map<string, int> blacklist;
    unordered_map<string, unordered_set<string>> userReport;
    
    for(auto r : report)
    {
        int idx = r.find(' ');
        string s1 = r.substr(0, idx++);
        string s2 = r.substr(idx, r.length() - 1);
        userReport[s1].insert(s2);
    }
    
    for(auto user : id_list)
    {
        for(auto r : userReport[user])
        {
            blacklist[r]++;            
        }      
    }
    
    for(auto user : id_list)
    {
        int reportUsers = 0;
        for(auto r : userReport[user])
        {
            if (blacklist[r] >= k)
                reportUsers++;
        }
        answer.push_back(reportUsers);
    }
    
    return answer;
}