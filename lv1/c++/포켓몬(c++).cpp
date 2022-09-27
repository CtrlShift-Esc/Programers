//https://school.programmers.co.kr/learn/courses/30/lessons/1845
#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> mosters(nums.begin(), nums.end());    
    int select = nums.size() / 2;
    int answer = select < mosters.size() ? select : mosters.size();
    return answer;
}