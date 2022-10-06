//https://school.programmers.co.kr/learn/courses/30/lessons/43165
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    return a.first < b.first;
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    vector<pair<int, int>> vt;
    
    for(int i = 0; i < numbers.size(); i++)
        vt.push_back(make_pair(i, numbers[i]));
    
    for(int i = 0; i < numbers.size() + 1; i++)
    {
        vector<bool> v(numbers.size() - i, false);
        v.insert(v.end(), i, true);
        do{  
            int sum = 0;
            for(int j =0; j < v.size(); j++)
            {                
                if (v[j])
                    sum += numbers[j];
                else
                    sum -= numbers[j];
            }
            if (sum == target)
                answer++;
        }while(next_permutation(v.begin(), v.end()));   
    }
    return answer;
}