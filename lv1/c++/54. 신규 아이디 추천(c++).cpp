//https://school.programmers.co.kr/learn/courses/30/lessons/72410
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string new_id) {
    string answer = "";
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
    for(int i = 0; i < new_id.length(); i++)
    {
        if('0' <= new_id[i] && new_id[i] <= '9')
            answer += new_id[i];
        else if ('a' <= new_id[i] && new_id[i] <= 'z')
            answer += new_id[i];
        else if (new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
            answer += new_id[i];
    }
    new_id = answer;
    answer = "";
    int dot = 0;
    for(int i = 0; i < new_id.length(); i++)
    {
        if (new_id[i] == '.')
            dot++;
        else
        {            
            if (dot > 0)
                answer += ".";            
            dot = 0;
            answer += new_id[i];
        }
        if(i == new_id.length() - 1 && dot > 0)
            answer += ".";
    }
    
    if(answer.length() > 0 && answer[0] == '.')
        answer = answer.substr(1, answer.length()-1);
    if(answer.length() > 0 && answer[answer.length()-1] == '.')
        answer = answer.substr(0, answer.length()-1);
    if (answer.empty())
        answer = "a";
    if(answer.length() >= 16)
    {
        answer = answer.substr(0, 15);
        if(answer.length() > 0 && answer[answer.length()-1] == '.')
            answer = answer.substr(0, answer.length()-1);
    }
    if(answer.length() <= 2)
    {
        char ch = answer[answer.length() - 1];
        int end = 3 - answer.length();
        for(int i = 0; i < end; i++)
            answer += ch;
    }
    
    return answer;
}