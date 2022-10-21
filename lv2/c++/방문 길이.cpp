//https://school.programmers.co.kr/learn/courses/30/lessons/49994
#include <string>
#include <map>
#include <vector>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    map<pair<int,int>, int> nodes;
    int node = 1;
    for(int i = -5; i <= 5; i++)
    {
        for(int j = -5; j <= 5; j++)
            nodes[{i,j}] = node++;
    }
    
    int x = 0, y = 0;
    map<pair<int,int>, map<pair<int,int>,int>> colors;
    for(const char& dir : dirs)
    {
        int cx = x, cy = y;
        if (dir == 'U')
            cy--;
        else if (dir == 'D')
            cy++;
        else if (dir == 'L')
            cx--;
        else
            cx++;
        
        if (!nodes[{cx, cy}])
            continue;
        
        if (!colors[{x, y}][{cx, cy}] && !colors[{cx, cy}][{x, y}])
            answer++;
        colors[{x, y}][{cx, cy}] = 1;
        colors[{cx, cy}][{x, y}] = 1;
        x = cx;
        y = cy;
    }
    return answer;
}