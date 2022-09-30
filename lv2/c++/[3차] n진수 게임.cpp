//https://school.programmers.co.kr/learn/courses/30/lessons/17687
#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int n, int t, int m, int p) {
	string answer = "";
	string s("0");
	char hex = 'A';
	int hexN = 10;

	int i = 1;
	while (s.length() / 2 <= t*m)
	{
		int d = i++;
		string decTo("");
		while (d != 0)
		{
			if (d%n >= hexN)
				decTo = (char)(hex + (d%n - hexN)) + decTo;
			else
				decTo = to_string(d%n) + decTo;
			d /= n;
		}
		s += decTo;
	}
    int start = p-1;
    for(int i = 0; i < t; i++)
    {
        answer += s[start];
        start+=m;
    }
	return answer;
}