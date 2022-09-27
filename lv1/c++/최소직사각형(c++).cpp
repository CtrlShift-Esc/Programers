//https://school.programmers.co.kr/learn/courses/30/lessons/86491
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int getMin(const int& a, const int& b)
{
    return a > b ? b : a;
}

int getMax(const int& a, const int& b)
{
    return a > b ? a : b;
}

int solution(vector<vector<int>> sizes) {
    int w = 0, h = 0;    
    for(auto rect : sizes)
    {
        int max = getMax(rect[0], rect[1]);
        int min = getMin(rect[0], rect[1]);
        if (w < max)
            w = max;
        if (h < min)
            h = min;
    }    
    cout << "w : " << w << " h : " << h;
    int answer = w * h;
    return answer;
}