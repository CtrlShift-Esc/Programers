//https://school.programmers.co.kr/learn/courses/30/lessons/120838
#include <string>
#include <map>
#include <sstream>

using namespace std;

string solution(string letter) {
    string answer = "";
    map<string, char> morse = {{".-",'a'},{"-...",'b'},{"-.-.",'c'},{"-..",'d'},{".",'e'},{"..-.",'f'},{"--.",'g'},{"....",'h'},{"..",'i'},{".---",'j'},{"-.-",'k'},{".-..",'l'},{"--",'m'},{"-.",'n'},{"---",'o'},{".--.",'p'},{"--.-",'q'},{".-.",'r'},{"...",'s'},{"-",'t'},{"..-",'u'},{"...-",'v'},{".--",'w'},{"-..-",'x'},{"-.--",'y'},{"--..",'z'}};
    
    stringstream ss(letter);
    string out;
    while(getline(ss, out, ' '))
    {
        answer += morse[out];
    }
    
    return answer;
}