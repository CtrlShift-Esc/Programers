//https://school.programmers.co.kr/learn/courses/30/lessons/92341
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    int m = fees[0];
    int cost = fees[1];
    int um = fees[2];
    int ucost = fees[3];
    
    map<string, vector<int>> ins;
    map<string, vector<int>> outs;
    
    for(const string& r : records)
    {
        stringstream ss(r);
        string out(""), time(""), carNum(""), parkingType("");                
        while(getline(ss, out, ' '))
        {
            if (time.empty())
                time = out;
            else if (carNum.empty())
                carNum = out;
            else if (parkingType.empty())
                parkingType = out;
        }
        
        int min = stoi(time.substr(0, 2)), second = stoi(time.substr(3,5));
        second += min*60;
        if (parkingType == "IN")
            ins[carNum].push_back(second);
        else
            outs[carNum].push_back(second);
    }
        
    int lastOut = 23*60+59;
    for(auto itr = ins.begin(); itr != ins.end(); itr++)
    {
        int t = 0;
        bool isOut = false;
        if (itr->second.size() == outs[itr->first].size())
            isOut = true;
        for(int i = 0; i < itr->second.size(); i++)
        {
            if (i == itr->second.size()-1 && !isOut)
                t += lastOut - itr->second[i];
            else
                t += outs[itr->first][i] - itr->second[i];
        }        
        
        //cout << "car : " << itr->first << " t : " << t << endl;
        t-=m;
        if (t < 0)
            answer.push_back(cost);
        else
        {
            t = (t/um) + (t%um>0?1:0);
            cout << t << endl;
            answer.push_back(cost + t*ucost);
        }
    }
    
    return answer;
}