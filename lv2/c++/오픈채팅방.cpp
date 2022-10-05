//https://school.programmers.co.kr/learn/courses/30/lessons/42888
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    unordered_map<string, string> userNic;
    vector<pair<string, string>> vt;
    
    for(const string& r : record)
    {
        string inout(""), id(""), nic("");
        stringstream ss(r);
        string out;
        while(getline(ss, out, ' '))
        {
            if (inout.empty())
                inout = out;
            else if (id.empty())
                id = out;
            else
                nic = out;            
        }
        if (inout != "Change")
            vt.push_back({id, inout});
        if (inout != "Leave")
            userNic[id] = nic;            
    }
    for(auto v : vt)
    {
        string s = userNic[v.first];                 
        if (v.second == "Enter")
            s += "님이 들어왔습니다.";
        else
            s += "님이 나갔습니다.";
        answer.push_back(s);
    }
    
    return answer;
}