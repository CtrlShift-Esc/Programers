//https://school.programmers.co.kr/learn/courses/30/lessons/118669
#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<vector<int>> paths, vector<int> gates, vector<int> summits) {
	vector<int> answer;
	vector<vector<int>> graph(n + 1);
	vector<int>* gate = new vector<int>(n + 1, 0);
	vector<int>* summit = new vector<int>(n + 1, 0);
	unordered_map<int, unordered_map<int, int>> costs;
	for (auto g : gates)
		(*gate)[g] = 1;
	for (auto s : summits)
		(*summit)[s] = 1;

	for (auto edge : paths)
	{
		graph[edge[0]].push_back(edge[1]);
		graph[edge[1]].push_back(edge[0]);
		costs[edge[0]][edge[1]] = edge[2];
		costs[edge[1]][edge[0]] = edge[2];
	}

	vector<int> cost(n + 1, 10000001);
	for (auto g : gates)
	{
		queue<int> bfs;
		bfs.push(g);
		cost[g] = 0;
		while (!bfs.empty())
		{
			int s = bfs.front();
			bfs.pop();
			for (const int& t : graph[s])
			{
				if ((*gate)[t])
					continue;

				int tmp = cost[s] > costs[s][t] ? cost[s] : costs[s][t];
				if (cost[t] > tmp)
				{
					cost[t] = tmp;
					if ((*summit)[t])
						continue;
					bfs.push(t);
				}
			}
		}
	}

	int min = 10000001;
	int summitResult = 0;
	std::sort(summits.begin(), summits.end());
	for (auto s : summits)
	{
		if (cost[s] < min)
		{
			summitResult = s;
			min = cost[s];
		}
	}

	answer.push_back(summitResult);
	answer.push_back(min);
	return answer;
}