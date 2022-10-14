//https://school.programmers.co.kr/learn/courses/30/lessons/120876
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
	int answer = 0;
	vector<int> vt(200);
	for (vector<int> line : lines)
    {
        sort(line.begin(), line.end());
        int s = line[0]+100;
        int e = line[1]+100;
        for(int i = s; i < e; i++)
            vt[i]++;
    }
    
    for(int i = 0; i < vt.size(); i++)
        answer += vt[i] > 1 ? 1 : 0;		

	return answer;
}