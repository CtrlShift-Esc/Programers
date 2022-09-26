//https://school.programmers.co.kr/learn/courses/30/lessons/81301
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    map<string, int> nums = {{"zero", -1}, {"one", 1}, {"two",2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    
    string str("");
    string r("");
    for(int i = 0; i < s.length(); i++)
    {
        if('0' <= s[i] && s[i] <= '9')
            r += s[i];
        else
        {
            str += s[i];
            if (nums[str] != 0)
            {
                string s1;                
                int n = nums[str] == -1 ? 0 : nums[str];
                stringstream ss;
                ss << n;
                ss >> s1;
                r += s1;
                str = "";
            }
        }
    }
    answer = stoi(r);
    return answer;
}