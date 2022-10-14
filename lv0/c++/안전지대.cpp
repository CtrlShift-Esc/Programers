//https://school.programmers.co.kr/learn/courses/30/lessons/120866
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    for(int i = 0; i < board.size(); i++)
    {
        for(int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] == 1)
            {
                for(int k = -1; k <= 1; k++)
                {
                    for(int p = -1; p <= 1; p++)
                    {
                        int x = i+k;
                        int y = j+p;
                        if (x < 0 || x >= board[i].size())
                            continue;
                        else if (y < 0 || y >= board.size())
                            continue;
                        else if (board[x][y] == 1)
                            continue;
                        board[x][y] = 2;
                    }
                }                
            }
        }
    }
    for(int i = 0; i < board.size(); i++)
    {
        for(int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] == 0)
                answer++;
        }
    }
    return answer;
}