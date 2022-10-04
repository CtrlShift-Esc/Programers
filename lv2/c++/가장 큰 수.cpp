//https://school.programmers.co.kr/learn/courses/30/lessons/42746
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int sqrt(int a, int s)
{
	int tmp = a;
	for (int i = 1; i < s; i++)
		a *= tmp;

	return a;
}
bool cmp(const int& a, const int& b)
{
	int al, bl;

	if (a < 10)
		al = 1;
	else if (a < 100)
		al = 2;
	else if (a < 1000)
		al = 3;
	else
		al = 4;

	if (b < 10)
		bl = 1;
	else if (b < 100)
		bl = 2;
	else if (b < 1000)
		bl = 3;
	else
		bl = 4;

	return (a * sqrt(10, bl)) + b > (b * sqrt(10, al)) + a ;
}

string solution(vector<int> numbers) {
    string answer = "";        
    
    vector<string> vt;
    sort(numbers.begin(), numbers.end(), cmp);
    
    for(auto n : numbers)
        answer += to_string(n);

    if(answer[0] == '0') return "0" ;
    return answer;
}