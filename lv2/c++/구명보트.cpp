//https://school.programmers.co.kr/learn/courses/30/lessons/42885
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end(), greater<int>());

    int max = 0;
    int min = people.size() - 1;
    while(1)
    {
        answer++;        
        if(min == max)
            break;
        if (max != min && people[max++] + people[min] <= limit)
        {
            if (max == min)
                break;
            min--;
        }
    }
    
    return answer;
}