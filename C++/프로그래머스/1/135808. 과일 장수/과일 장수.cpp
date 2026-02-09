#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int size = score.size();
    sort(score.rbegin(), score.rend());
    
    for(int i = 0; i < size; i+=m) {
        int a = i+m-1;
        if(a > size) break;
        answer += score[a] * m;
    }
    
    return answer;
}