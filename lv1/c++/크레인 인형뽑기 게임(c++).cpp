https://school.programmers.co.kr/learn/courses/30/lessons/64061
#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    deque<int> r;
    vector<deque<int>> b(board.size());
    for(int i = board.size() - 1; i >= 0; i--)
    {
        for(int j = 0; j < board[i].size(); j++)
        {
            int n = board[i][j];
            if (n != 0)
                b[j].push_back(n);
        }
    }
    
    for(auto m : moves)
    {
        if(b[m-1].empty())
            continue;
        
        int move = b[m-1].back();
        b[m-1].pop_back();
        
        if (!r.empty())
        {
            if (r.back() == move)
            {
                answer += 2;
                r.pop_back();
            }
            else
                r.push_back(move);
        }
        else 
            r.push_back(move);
    }
    
    return answer;
}