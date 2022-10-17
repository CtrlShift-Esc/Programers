//https://school.programmers.co.kr/learn/courses/30/lessons/43163
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

int differ(const string& a, const string& b, int length)
{
	int dif = 0;
	for (int i = 0; i < length; ++i)
	{
		if (a[i] != b[i])
			dif++;

		if (dif > 1)
			return -1;
	}
	return dif;
}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;    
    if (words.end() == find(words.begin(), words.end(), target))
		return 0;
	if (words.end() == find(words.begin(), words.end(), begin))
		words.push_back(begin);
	map<string, int> vertexs;
	int length = words[0].length();
	for (int i = 0; i < words.size(); i++)
		vertexs[words[i]] = i;
	vector<vector<int>> graph(vertexs.size());
	for (int i = 0; i < words.size(); i++)
	{
		for (int j = 0; j < words.size(); j++)
		{
			if (i == j)
				continue;

			if (differ(words[i], words[j], length) == 1)
			{
				graph[vertexs[words[i]]].push_back(vertexs[words[j]]);
				graph[vertexs[words[j]]].push_back(vertexs[words[i]]);
			}
		}
	}

	queue<int> bfs;
	vector<int> colors(vertexs.size(), 0);
	vector<vector<int>> path(vertexs.size());
	bfs.push(vertexs[begin]);
	path[vertexs[begin]].push_back(vertexs[begin]);

	while (!bfs.empty())
	{
		int s = bfs.front();
		bfs.pop();

		for (const int& t : graph[s])
		{
			if (!colors[t])
			{
				path[t] = path[s];
				path[t].push_back(t);
				if (t == vertexs[target])
					break;

				colors[t] = 1;		
				bfs.push(t);
			}
		}
		colors[s] = 1;
	}

    vector<string> answers;
	for (auto p : path[vertexs[target]])
		answers.push_back(words[p]);
	answer = answers.size() - 1;
    return answer;
}