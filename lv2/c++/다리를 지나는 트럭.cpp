//https://school.programmers.co.kr/learn/courses/30/lessons/42583
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {    
    int answer = 0;
    
    deque<pair<int,int>> standbyTruck;    
    queue<pair<int,int>> goingTruck;    
    
    for(auto truck : truck_weights)
        standbyTruck.push_back(make_pair(truck, 0));        
    
    int truckCnt = truck_weights.size();
    int end = 0;
    while(truckCnt != end)
    {
        answer++;
        
        pair<int, int> truck(-1,-1);
        
        if (!standbyTruck.empty())
            truck = standbyTruck.front();
        
        int going = 0, w = 0;
        int size = goingTruck.size();
		while (size != going++)
		{
			auto goTruck = goingTruck.front();
			goingTruck.pop();			
			if (++goTruck.second > bridge_length)				
                end++;
			else
			{
				w += goTruck.first;
				goingTruck.push(goTruck);
			}
		}
        
        if (truck.first == -1)
            continue;
        
        if (weight >= w + truck.first)
        {
            truck.second++;
            goingTruck.push(truck);
            standbyTruck.pop_front();
        }
    }
    
    return answer;
}