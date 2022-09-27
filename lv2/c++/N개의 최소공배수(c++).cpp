//https://school.programmers.co.kr/learn/courses/30/lessons/12953
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    sort(arr.begin(), arr.end(), greater<int>());
    answer = arr[0];
    for(int i = 1; i < arr.size(); i++)
    {
        if (answer % arr[i] == 0)
            continue;
        
        int d = 0;
        for(int j = 1; j <= arr[i]; j++)
        {
            if (answer % j == 0 && arr[i] % j == 0)
                d = j;
        }
        answer *= arr[i];
        if (d != 1)
            answer /= d;
    }
    return answer;
}