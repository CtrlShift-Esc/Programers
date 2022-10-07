//https://school.programmers.co.kr/learn/courses/30/lessons/120904
#include <list>
#include <algorithm>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    list<int> lst;
    while(num!=0)
    {
        lst.push_front(num%10);
        num/=10;
    }
    auto itr = find(lst.begin(), lst.end(), k);
    if  (itr != lst.end())
        answer = distance(lst.begin(), itr)+1;
    else
        answer = -1;
    return answer;
}