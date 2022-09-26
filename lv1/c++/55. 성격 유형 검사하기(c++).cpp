//https://school.programmers.co.kr/learn/courses/30/lessons/118666
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {    
    string answer = "";
    
    unordered_map<char, int> indicator = {{'R', 0}, {'T', 1}, {'C', 2}, {'F', 3}, {'J', 4}, {'M', 5}, {'A', 6}, {'N', 7}};
    
    vector<int> costs = {0, 3, 2, 1, 0, 1, 2, 3};    
    vector<int> cost(8, 0);
    for(int i = 0; i < survey.size(); i++)
    {
        int choice = choices[i];
        if (choice == 4)
            continue;
        
        int idx = 1;
        if (choice < 4)
            idx = 0;        
        
        cost[indicator[survey[i][idx]]] += costs[choice];
    }
    
    if (cost[0] >= cost[1])
        answer += "R";
    else
        answer += "T";
    
    if (cost[2] >= cost[3])
        answer += "C";
    else
        answer += "F";
    
    if (cost[4] >= cost[5])
        answer += "J";
    else
        answer += "M";
    
    if (cost[6] >= cost[7])
        answer += "A";
    else
        answer += "N";
    
    return answer;
}