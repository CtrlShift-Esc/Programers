//https://school.programmers.co.kr/learn/courses/30/lessons/120849
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string my_string) {
    string answer = "";
    map<char, int> m = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}};
    for(int i = 0; i < my_string.length(); i++)
    {
        if (m[my_string[i]])
            continue;
        answer += my_string[i];
    }
    return answer;
}