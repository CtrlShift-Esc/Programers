//https://school.programmers.co.kr/learn/courses/30/lessons/17681
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> decToN(int n, int r, int l)
{
    vector<int> vt(l, 0);
    int idx = l-1;
    while(n != 0)
    {
        vt[idx--] = n%r;
        n /= r;
    }
    return vt;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    vector<vector<int>> a1(n, vector<int>(n)), a2(n, vector<int>(n));
    
    for(int i = 0; i < arr1.size(); i++)
    {
        vector<int> vt1 = decToN(arr1[i], 2, n);
        vector<int> vt2 = decToN(arr2[i], 2, n);
        string s("");
        for(int j = 0; j < n; j++)
        {
            if (vt1[j] || vt2[j])
                s += "#";
            else
                s += " ";
        }
        answer.push_back(s);
    }
    
    
    return answer;
}