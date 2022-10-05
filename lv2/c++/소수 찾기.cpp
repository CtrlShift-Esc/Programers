//https://school.programmers.co.kr/learn/courses/30/lessons/42839
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_set>

using namespace std;

bool isPrime(int n)
{
	if (n < 2)
		return false;
	
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;	
	}
	return true;
}

int solution(string numbers) {
    int answer = 0;
    
    unordered_set<int> result;
    sort(numbers.begin(), numbers.end());
    
    for(int i = 0; i < numbers.size(); i++)
    {
        vector<int> v(numbers.size(), 0);
        for(int j = 0; j <= i; j++)
            v[j] = 1;
        sort(v.begin(), v.end());
        do
        {
            string s;
            for(int p = 0; p < numbers.length(); p++)
            {
                if (v[p])
                    s += numbers[p];
            }            
            sort(s.begin(), s.end());
            do
            {
                result.insert(stoi(s));
            }while(next_permutation(s.begin(), s.end()));            
        }while(next_permutation(v.begin(), v.end()));
    }
    
    int a = 0;
    for(auto s : result)
    {
        if (isPrime(s))
            answer++;
    }
    return answer;
}