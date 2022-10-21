//https://school.programmers.co.kr/learn/courses/30/lessons/42579
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmpPalyedId(const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.second == b.second)
        return a.first < b.first;
    
    return a.second > b.second;
}

bool cmpRank(const pair<string, int>& a, const pair<string, int>& b)
{
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    unordered_map<string, int> playRank;
    unordered_map<string, vector<pair<int, int>>> mugics;
    
    for(int i = 0; i < genres.size(); i++)
    {        
        playRank[genres[i]] += plays[i];       
        mugics[genres[i]].push_back(make_pair(i, plays[i]));
    }
    
    vector<pair<string, int>> vvt(playRank.begin(), playRank.end());
    sort(vvt.begin(), vvt.end(), cmpRank);
    
    for(auto v : vvt)
    {
        //cout << v.first << " : " << v.second << endl;
        
        vector<pair<int, int>> vt(mugics[v.first]);
        
        sort(vt.begin(), vt.end(), cmpPalyedId);
        int i = 0;
        for(auto play : vt)
        {
            if (i++ >= 2)
                break;
            //cout << play.first << " : " << play.second << endl;
            answer.push_back(play.first);
        }
    }
    
    return answer;
}