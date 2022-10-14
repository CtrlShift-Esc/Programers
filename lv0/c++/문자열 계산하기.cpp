//https://school.programmers.co.kr/learn/courses/30/lessons/120902
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream s(my_string);
    string out;
    vector<string> vt;
    while(getline(s, out, ' '))
    {
        vt.push_back(out);
    }
    answer = stoi(vt[0]);
    for(int i = 1; i < vt.size(); i+=2)
    {
        if (vt[i] == "+")
            answer += stoi(vt[i+1]);
        else
            answer -= stoi(vt[i+1]);
    }
    return answer;
}