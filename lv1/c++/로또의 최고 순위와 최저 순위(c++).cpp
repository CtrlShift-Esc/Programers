//https://school.programmers.co.kr/learn/courses/30/lessons/77484
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int getRank(int n)
{
    if(n == 6)
        return 1;
    else if(n == 5)
        return 2;
    else if(n == 4)
        return 3;
    else if(n == 3)
        return 4;
    else if(n == 2)
        return 5;
    
    return 6;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero = 0;
    int same = 0;
    for(int i = 0; i < lottos.size(); i++)
    {
        if (lottos[i] == 0)
        {
            zero++;
            continue;
        }
        if(win_nums.end() != find(win_nums.begin(), win_nums.end(), lottos[i]))
            same++;
    }
    answer.push_back(getRank(same + zero));
    answer.push_back(getRank(same));
    return answer;
}