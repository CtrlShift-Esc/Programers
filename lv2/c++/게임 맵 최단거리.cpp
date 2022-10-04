//https://school.programmers.co.kr/learn/courses/30/lessons/1844
#include <vector>
#include <queue>
#include <iostream>
#include <unordered_map>

using namespace std;

struct Node
{
public:
    Node(){}
    Node(int x, int y):_x(x),_y(y){}
    ~Node(){}
    int _x;
    int _y;
};

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    queue<Node> que;    
    que.push(Node(0,0));    
    int n = maps[0].size();
    int m = maps.size();
    vector<vector<int>> distance(m, vector<int>(n, 0));
    distance[0][0] = 1;
    
    while(!que.empty())
    {
        Node s = que.front();
        que.pop();
        vector<Node> edges;
        
        if (s._x-1 >= 0 && maps[s._x-1][s._y])
            edges.push_back(Node(s._x-1, s._y));
        if (s._x+1 < m && maps[s._x+1][s._y])
            edges.push_back(Node(s._x+1, s._y));      
        if (s._y-1 >= 0 && maps[s._x][s._y-1])
            edges.push_back(Node(s._x, s._y-1));
        if (s._y+1 < n && maps[s._x][s._y+1])
            edges.push_back(Node(s._x, s._y+1));      

        for(const Node& t : edges)
        {
            if (maps[t._x][t._y])
            {
                maps[t._x][t._y] = 0;
                distance[t._x][t._y] = distance[s._x][s._y] + 1;                
                que.push(t);
            }
        }
        maps[s._x][s._y] = 0;
    }     
    answer = distance[m-1][n-1];
    if (answer == 0)
        answer = -1;
    
   
    return answer;
}