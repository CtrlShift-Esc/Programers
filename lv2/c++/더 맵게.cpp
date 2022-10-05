//https://school.programmers.co.kr/learn/courses/30/lessons/42626
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

class OrderAsc
{
public:
    bool operator()(const int& a, const int& b)
    {
        return a > b;
    }
};

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, vector<int>, OrderAsc> pq(scoville.begin(), scoville.end());
    
    while(!pq.empty())
    {        
        int fmin = pq.top();
        if (fmin >= K)
            break;
        pq.pop();
        if (pq.empty())
        {
            answer = -1;
            break;
        }
        int smin = pq.top();
        pq.pop();
        int scv = fmin + (smin * 2);
        pq.push(scv);
        answer++;        
    }
    
    return answer;
}