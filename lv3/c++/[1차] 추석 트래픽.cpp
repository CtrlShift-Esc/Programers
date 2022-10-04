//https://school.programmers.co.kr/learn/courses/30/lessons/17676
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Traffic
{
public:   
    Traffic(){}
    Traffic(int s, int e, int p):start(s),end(e),process(p){}
    ~Traffic(){}
    
    int start;
    int end;
    int process;
};

Traffic getTraffic(string log)
{   
    int h = stoi(log.substr(11, 2));
    int m = stoi(log.substr(14, 2));
    int s = stoi(log.substr(17, 2));
    int ms = stoi(log.substr(20, 3));
        
    int process = stof(log.substr(24, log.length()-1)) * 1000;    
    int end = (h * 60 * 60 * 1000) + (m * 60 * 1000) + (s * 1000) + ms;
    int start = end - process + 1;
    return Traffic(start, end, process);    
}

int solution(vector<string> lines) {
    int answer = 0;
    vector<Traffic> traffics;
    for(auto log : lines)
        traffics.push_back(getTraffic(log));    
    
    for(int i = 0; i < traffics.size(); i++)
    {
        int end = traffics[i].end + 999;
        int cnt = 0;
        
        for(int j = i; j < traffics.size(); j++)
        {
            if (traffics[j].start <= end)
                cnt++;
        }
        
        if (answer < cnt)
            answer = cnt;
    }
    
 
    return answer;
}