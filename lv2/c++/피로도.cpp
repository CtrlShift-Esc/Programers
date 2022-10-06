//https://school.programmers.co.kr/learn/courses/30/lessons/87946
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Dungeon
{
    public:
    Dungeon(int i, int f, int n){
        id = i;
        fd = f;
        need = n;
    }
    ~Dungeon(){}
    int id;
    int fd;
    int need;
};

bool cmp(const Dungeon& a, const Dungeon& b)
{
    return a.id > b.id;
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    
    vector<Dungeon> v;
    for(int i = 0; i < dungeons.size(); i++)
        v.push_back(Dungeon(i, dungeons[i][0], dungeons[i][1]));
    
    sort(v.begin(), v.end(), cmp);
    do{
        int cnt = 0;
        int tmp = k;
        for(int i = 0; i < v.size(); i++)
        {
            if (tmp < v[i].fd)
                break;
            tmp -= v[i].need;
            cnt++;
        }        
        if (answer < cnt)
            answer = cnt;
    }while(next_permutation(v.begin(), v.end(), cmp));
    
    return answer;
}