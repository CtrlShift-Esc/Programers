//https://school.programmers.co.kr/learn/courses/30/lessons/118667
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = -2;
    long long sum1 = 0, sum2 = 0;
    for(const int& v : queue1)
        sum1 += v;
    for(const int& v : queue2)
        sum2 += v;    
    if ((sum1 + sum2) % 2 > 0)
        return -1;    
    long long half = (sum1 + sum2)/2;     
    
    vector<int> next(queue1), prev(queue2);
    next.insert(next.end(), prev.begin(), prev.end());
    prev.insert(prev.end(), queue1.begin(), queue1.end());
    
    int cnt = 0;
    int maxSize = queue1.size() + queue2.size();
	int nextPopIdx = 0, nextPushIdx = queue1.size(), prevPopIdx = 0, prevPushIdx = queue2.size();
	int ret1 = -2, ret2 = -2;
	while (cnt++ < maxSize*2)
	{
		if (sum1 == half)
		{
			ret1 = nextPopIdx + nextPushIdx - queue1.size();
			break;
		}

		if (sum1 > half)
			sum1 -= next[nextPopIdx++];
		else
			sum1 += next[nextPushIdx++];
		if (nextPushIdx == next.size())
			nextPushIdx = 0;

		if (sum2 == half)
		{
			ret2 = prevPopIdx + prevPushIdx - queue2.size();
			break;
		}

		if (sum2 > half)
			sum2 -= prev[prevPopIdx++];
		else
			sum2 += prev[prevPushIdx++];
		if (prevPushIdx == prev.size())
			prevPushIdx = 0;
	}
    
    cout << "r1 : " << ret1 << endl;
    cout << "r2 : " << ret2 << endl;    
    
    answer = min(ret1, ret2);
    if (ret1 == -2 && ret2 == -2)
        answer = -1;
    else
        answer = max(ret1, ret2);
    
    return answer;
}