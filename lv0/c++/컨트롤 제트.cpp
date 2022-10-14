//https://school.programmers.co.kr/learn/courses/30/lessons/120853
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    string out;
    int prev = 0;
    vector<int> vt;
    while(getline(ss, out, ' '))
    {
        if (out == "Z")
        {
            if (vt.size() > 0)
                vt.pop_back();
            continue;
        }
        prev = stoi(out);
        vt.push_back(prev);
    }
    for(int i = 0; i < vt.size(); i++)
        answer += vt[i];
    return answer;
}