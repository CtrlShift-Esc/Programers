//https://school.programmers.co.kr/learn/courses/30/lessons/12945
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
	vector<int> vt(n+1);
	vt[0] = 0;
	vt[1] = 1;
	for (int i = 2; i <= n; i++)
		vt[i] = (vt[i - 2] + vt[i - 1]) % 1234567;
    answer = vt[n];
    return answer;
}