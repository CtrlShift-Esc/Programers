//https://school.programmers.co.kr/learn/courses/30/lessons/120863
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);
    string out;
    int num = 0;
    int xNum = 0;
    while(getline(ss, out, ' '))
    {
        if (out == "+")
            continue;
        
        auto itr = out.find("x");
        if (itr != string::npos)//find
        {
            if (out.length() == 1)
                xNum++;
            else
                xNum+=stoi(out.substr(0,itr));
        }
        else
            num += stoi(out);
    }
    
    if (xNum != 0)
        answer += (xNum != 1 ? to_string(xNum):"")+"x";
    if (num != 0)
        answer += (answer.empty()?"":" + ") + to_string(num);
    return answer;
}