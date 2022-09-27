//https://school.programmers.co.kr/learn/courses/30/lessons/12930
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s) {
	string answer = "";
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	int idx = 0;
	answer = s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			idx = 0;
			continue;
		}

		if (idx++ % 2 == 0)
			answer[i] = (char)((int)s[i] - 32);
	}

	return answer;
}