//https://school.programmers.co.kr/learn/courses/30/lessons/120882
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool cmp(const pair<int, double>& a, const pair<int, double>& b)
{
    return a.second > b.second;
}

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<pair<int, double>> avg(score.size());
    map<double, int> dup;
    for(int i = 0; i < score.size(); i++)
    {
        avg[i] = {i, (double)(score[i][0]+score[i][1])/2};
        dup[avg[i].second]++;
    }
    sort(avg.begin(), avg.end(), cmp);
    answer.resize(avg.size());
    int rank = 1, dupCnt = 0;
    for(auto s : avg)
    {
        dupCnt++;
        answer[s.first] = rank;
        if (--dup[s.second] == 0)
        {
            rank+=dupCnt;
            dupCnt=0;
        }        
    }
        
    return answer;
}