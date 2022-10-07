//https://school.programmers.co.kr/learn/courses/30/lessons/120894
#include <string>
#include <vector>
#include <map>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string ret(""), num("");
    map<string, char> m = {{"zero",'0'}, {"one",'1'}, {"two",'2'}, {"three",'3'}, {"four", '4'}, {"five", '5'}, {"six", '6'}, {"seven", '7'}, {"eight", '8'}, {"nine", '9'}};
    for(int i = 0; i < numbers.length(); i++)
    {
        num+=numbers[i];
        if (m[num] >= '0')
        {
            ret += m[num];
            num="";
        }
    }
    answer = stol(ret);
    return answer;
}