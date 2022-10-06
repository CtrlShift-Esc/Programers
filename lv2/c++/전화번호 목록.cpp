//https://school.programmers.co.kr/learn/courses/30/lessons/42577
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    unordered_map<string, int> hash;
    for(int i =0; i < phone_book.size(); i++)
        hash[phone_book[i]] = 1;
    
    for(int i = 0; i < phone_book.size(); i++)
    {
        string s;
        for(int j = 0; j < phone_book[i].length() - 1; j++)
        {
            s += phone_book[i][j];   
            
            if (s == phone_book[i])
                continue;
            
            if (hash.end() != hash.find(s))
            {
                answer = false;                
            }
            
            if (!answer)
                break;
        }
        if (!answer)
            break;
    }
       
    return answer;
}