//https://school.programmers.co.kr/learn/courses/30/lessons/120907
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(const string& q : quiz)
    {
        stringstream ss(q);
        string out;
        bool isResult = false, isPlus = false;
        string f(""), s(""), ret("");
        while(getline(ss, out, ' '))
        {
            if (out == "+")
                isPlus = true;
            else if (out == "=")
                isResult = true;
            if (out == "+" || out == "-" || out == "=")
                continue;
            
            if (f.empty())
                f = out;
            else if (s.empty())
                s = out;            
            else
            {
                ret = out;
                if (isPlus)
                    answer.push_back(stoi(f)+stoi(s)==stoi(ret)?"O":"X");
                else
                    answer.push_back(stoi(f)-stoi(s)==stoi(ret)?"O":"X");
            }
        }
    }
    return answer;
}