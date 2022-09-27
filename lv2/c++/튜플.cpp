//https://school.programmers.co.kr/learn/courses/30/lessons/64065
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{    
    return a.second > b.second;
}

vector<int> solution(string s) {
    vector<int> answer;        
    map<string, int> elements;
    stringstream ss(s);
    string out;
    while(getline(ss, out, '}'))
    {
        if (out.empty())
            continue;
        string e(out.begin()+2, out.end());
        auto f = e.find(",");
        if (e.length() < f)
            elements[e]++;
        else
        {
            stringstream ss2(e);
            string out2;
            while(getline(ss2, out2, ','))
            {
                elements[out2]++;
            }
        }
    }
    
    vector<pair<int, int>> svt;
    for(auto itr = elements.begin(); itr != elements.end(); itr++)
        svt.push_back(make_pair(stoi((*itr).first), (*itr).second));
    sort(svt.begin(), svt.end(), cmp);
    for(auto v : svt)
        answer.push_back(v.first);
    
    return answer;
}