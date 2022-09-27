https://school.programmers.co.kr/learn/courses/30/lessons/67256
#include <string>
#include <vector>
#include <map>

using namespace std;

int distance(int s, int e, map<int, pair<int,int>> coordinate)
{
    pair<int, int> d1 = coordinate[s];
    pair<int, int> d2 = coordinate[e];
    int n1 = d1.first - d2.first;
    int n2 = d1.second - d2.second;
    if (n1 < 0)
        n1 *= -1;
    if (n2 < 0)
        n2 *= -1;
    return n1 + n2;
}

string solution(vector<int> numbers, string hand) {
	string answer = "";
    vector<vector<int>> keypad = {{1,2,3}, {4,5,6},{7,8,9},{-1,0,-2}};
    map<int, pair<int,int>> coordinate;
    for(int i = 0; i < keypad.size(); i++)
    {
        for(int j = 0; j < keypad[i].size(); j++)
            coordinate[keypad[i][j]] = make_pair(i, j);
    }
	int r = -2;
	int l = -1;
	for (const int& n : numbers)
	{
        string s("");
		if (n == 1 || n == 4 || n == 7)
            s = "L";
		else if (n == 3 || n == 6 || n == 9)
            s = "R";
		else
		{
            if (hand == "right")
            {
                if (distance(r, n, coordinate) <= distance(l, n, coordinate))
                    s = "R";
                else
                    s = "L";
            }
            else
            {
                if (distance(r, n, coordinate) >= distance(l, n, coordinate))
                    s = "L";   
                else
                    s = "R";
            }
		}
        answer += s;
        if (s == "R")
            r = n;
        else
            l = n;
	}
	return answer;
}