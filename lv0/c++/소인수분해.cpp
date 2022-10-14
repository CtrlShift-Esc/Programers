//https://school.programmers.co.kr/learn/courses/30/lessons/120852
#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    set<int> elements;
    int element = 2;
    while(1<n)
    {
        if (n%element!=0)
        {
            element++;
            continue;
        }
        elements.insert(element);
        n/=element;
    }
    answer = vector<int>(elements.begin(), elements.end());
    return answer;
}