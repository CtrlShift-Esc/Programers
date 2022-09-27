//https://school.programmers.co.kr/learn/courses/30/lessons/12901
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(int a, int b) {
	string answer = "";
	vector<string> d = { "THU","FRI","SAT","SUN","MON","TUE","WED" };
	map<int, int> date = { {1,31},{2,29},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31} };
	int n = 0;
	for (int i = 1; i < a; i++)
		n += date[i];
	n += b;
	//n += 4; // standard : FRI
	n %= 7;
	answer = d[n];
	return answer;
}