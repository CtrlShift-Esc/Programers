//https://school.programmers.co.kr/learn/courses/30/lessons/84512
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string word) {
    int answer = 0;    
    map<char, int> order = { {'A', 1}, {'E', 2}, {'I', 3}, {'O', 4}, {'U', 5} };
	for (int i = 0; i < word.length(); i++)
	{
		answer += order[word[i]];
		for (int j = 1; j < order[word[i]]; j++)
		{
			for (int p = 1; p < order.size() - i; p++)
			{
				int n = order.size();
				for(int k = 1; k < p; k++)
					n *= order.size();
				answer += n;
			}
		}
	}
  
    return answer;
}