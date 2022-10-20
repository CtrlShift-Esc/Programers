//https://school.programmers.co.kr/learn/courses/30/lessons/42883
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string number, int k) {
	string answer = "";

	int size = number.length() - k;
	for (int i = 0; i < size; i++)
	{
		int idx = 0;
		for (int j = 1; j <= k; j++)
		{
			if (number[idx] < number[j])
				idx = j;
		}
		k -= idx;
		answer += number[idx];
		number.erase(0, idx+1);
		if (k == 0)
			break;
	}
	for (const char& ch : number)
    {
        if (answer.length() == size)
            break;
        answer += ch;
    }		

	return answer;
}